SELECT e.name as 'Employee'
  FROM 
  Employee as e, 
  Employee m 
  WHERE (e.salary > m.salary and m.id=e.managerId);
