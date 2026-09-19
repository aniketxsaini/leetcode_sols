# Write your MySQL query statement below
select emp.name as Employee from Employee e inner join Employee emp on e.id=emp.managerId where emp.salary > e.salary;
