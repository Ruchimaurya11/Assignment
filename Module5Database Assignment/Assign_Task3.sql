
use task;
create table Employee(
Employee_id int primary key,
First_name varchar(15),
Last_name varchar(20),
Salary int,
Joining_date datetime,
Department varchar(15)); 
select * from Employee;
insert into Employee values
(1,"John","Abraham",1000000,"2013-01-01 12:00:00","Banking"),
(2,"Michael","Clarke",800000,"2013-01-01 12:00:00","Insurance"),
(3,"Roy","Thomas",700000,"2013-02-01 12:00:00","Banking"),
(4,"Tom","Jose",600000,"2013-02-01 12:00:00","Insurance"),
(5,"Jerry","Pinto",650000,"2013-02-01 12:00:00","Insurance"),
(6,"Philip","Mathew",750000,"2013-01-01 12:00:00","Services"),
(7,"Testname1","123",650000,"2013-01-01 12:00:00","service"),
(8,"Testname2","Lname%",6000000,"2013-02-01 12:00:00","Insurance");

create table Incentive(
Employee_ref_id int,
Incentive_date date,
Incentive_amount int,
foreign key(Employee_ref_id) references Employee(Employee_id)
);
insert into Incentive values
(1,"2013-02-01",5000),
(2,"2013-02-01",3000),
(3,"2013-02-01",4000),
(1,"2013-01-01",4500),
(2,"2013-01-01",3500);

select * from Incentive;
-- (Query a) Get First_Name from employee table using Tom name “Employee Name”.

SELECT First_name
FROM Employee
WHERE First_name = 'Tom';

-- (Query b) Get FIRST_NAME, Joining Date, and Salary from employee table.

select First_name,Joining_date,Salary from Employee;


--  (Query c) Get all employee details from the employee table order by First_Name Ascending and Salary descending?
select * from Employee
order by First_name asc;

select * from Employee
order by salary desc;

--  (Query d) Get employee details from employee table whose first name contains ‘J’.

SELECT *
FROM Employee
WHERE First_name LIKE '%J%';


--  (Query e) Get department wise maximum salary from employee table order by salary ascending?select max(salary)from Employee 

SELECT Department, MAX(salary) AS max_salary
FROM Employee
GROUP BY Department
ORDER BY max_salary ASC;



--  (Query f) Select first_name, incentive amount from employee and incentives table for 
--            those employees who have incentives and incentive amount greater than 3000 

SELECT e.first_name, i.incentive_amount
FROM employee e
INNER JOIN incentives i ON e.employee_id = i.employee_id
WHERE i.incentive_amount > 3000;


--  (Query g) ) Create After Insert trigger on Employee table which insert records in view table














