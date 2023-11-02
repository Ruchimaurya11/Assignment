use task;
select * from salesperson;
insert into salesperson values
(1001,"Peel","London",.12),
(1002,"Serres","San Jose",.13),
(1004,"Motika","London",.11),
(1007,"Rafkin","Barcelona",.15),
(1003,"Axelrod","New York",.1);

create table Customer(
CNM int primary key,
CNAME varchar(10),
CITY varchar(10),
RATING int ,
SNO int,
foreign key (SNO) references salesperson(SNO)); 

insert into Customer values
(201,"Hoffman","London",100,1001),
(202,"Giovanne","Roe",200,1003),
(203,"Liu","San Jose",300,1002),
(204,"Grass","Barcelona",100,1002),
(206,"Clemens","London",300,1007);

select * from Customer;

-- (Query a) All orders for more than $1000.
 
-- (Query b) Names and cities of all salespeople in London with commission above 0.12 
select SNAME,CITY
from salesperson
where COMM >=0.12;

-- (Query c) All salespeople either in Barcelona or in London 
select * from salesperson
where CITY ="barcelona" or CITY="London";

-- (Query d) All salespeople with commission between 0.10 and 0.12. (Boundary values should be excluded).
select * from salesperson
where COMM between 0.10 and 0.12; 

-- (Query e) All customers excluding those with rating <= 100 unless they are located in Rome 
select * from customer
where RATING <=100;

