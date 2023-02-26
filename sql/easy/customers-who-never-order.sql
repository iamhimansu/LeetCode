SELECT name as Customers
FROM Customers 
WHERE NOT exists (
  SELECT customerId
  FROM Orders 
  WHERE Customers.id=Orders.customerId
)
