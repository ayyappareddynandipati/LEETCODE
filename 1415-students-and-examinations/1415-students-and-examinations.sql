# Write your MySQL query statement below

select 
    s.student_id,
    s.student_name,
    sub.subject_name,
    ifnull(count(e.subject_name), 0) as attended_exams
from students s
join subjects sub
left join examinations e
    on e.student_id = s.student_id
    and e.subject_name = sub.subject_name
group by s.student_id, s.student_name, sub.subject_name
order by s.student_id, sub.subject_name;