use task;
create table task1 
(
First_name varchar(10), 
last_name varchar(10),
Address varchar(25),
city varchar(15),
Age int
);
insert into task1 values
("Mickey","Mouse","123 fantasy Way","Anaheim",73),
("Bat","Man","321 Cavern Ave","Gothem",54),
("Wonder","Woman","987 Truth Way","Paradise",39),
("Donald","Duck","555 Quack Street","Mallard",65),
("Bugs","Bunny","567 Carrot Street","Rascal",58),
("Wiley","Coyote","999 Acme Way","Canyon",61),
("Cat","Woman","234 Purfect Street","Hairball",32),
("Tweety","Bird",543,"Itotlow",28);
select * from task1;