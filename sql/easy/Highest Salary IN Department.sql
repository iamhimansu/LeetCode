Write an SQL query to find employees who have the highest salary in each of the departments.

Return the result table in any order.

The query result format is in the following example.

 

Example 1:

Input: 
Employee table:
+----+-------+--------+--------------+
| id | name  | salary | departmentId |
+----+-------+--------+--------------+
| 1  | Joe   | 70000  | 1            |
| 2  | Jim   | 90000  | 1            |
| 3  | Henry | 80000  | 2            |
| 4  | Sam   | 60000  | 2            |
| 5  | Max   | 90000  | 1            |
+----+-------+--------+--------------+
Department table:
+----+-------+
| id | name  |
+----+-------+
| 1  | IT    |
| 2  | Sales |
+----+-------+
Output: 
+------------+----------+--------+
| Department | Employee | Salary |
+------------+----------+--------+
| IT         | Jim      | 90000  |
| Sales      | Henry    | 80000  |
| IT         | Max      | 90000  |
+------------+----------+--------+
Explanation: Max and Jim both have the highest salary in the IT department and Henry has the highest salary in the Sales department.

SELECT (
          SELECT name FROM Department WHERE Department.id=Employee.departmentId) as Department
            ,Employee.name as Employee
            ,Employee.salary as Salary 
          FROM Employee WHERE 
                        (departmentId, salary) 
                        IN 
                        (SELECT departmentId, MAX(DISTINCT salary) as m FROM Employee GROUP BY departmentId
       );
       
       
       
       
##OPTIMISED
FROM SOLUTIONS
# Write your MySQL query statement below
with x as (
select
name
, departmentId
, salary
,(rank() over (partition by departmentId order by salary desc)) as rowe
from
employee)
select
d.name as Department
, x.name as Employee
, x.salary as Salary
from
x join department d on x.departmentId = d.id
where
rowe=1


