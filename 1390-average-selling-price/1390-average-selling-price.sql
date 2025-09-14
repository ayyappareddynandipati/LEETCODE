# Write your MySQL query statement below
select p.product_id , 
case
    when count(us.product_id) = 0 then 0
    else round(sum(us.units * p.price) / sum(us.units),2)
end
as average_price
from Prices p
left join 
UnitsSold us
on p.product_id = us.product_id
and (us.purchase_date >= p.start_date)
and (us.purchase_date <= p.end_date)
group by p.product_id;