SELECT email as 'Email'
  FROM Person 
  GROUP by email 
  HAVING 
      count(DISTINCT id) > 1
