# Write your MySQL query statement below
select name as Customers
from Customers c 
left join Orders o
on c.id = o.customerid
where o.id is null;