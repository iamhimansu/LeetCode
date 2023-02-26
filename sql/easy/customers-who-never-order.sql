select name as Customers from Customers where not exists (select customerId from Orders where Customers.id=Orders.customerId)


