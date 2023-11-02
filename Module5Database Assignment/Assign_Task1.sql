use task;
create table student1(
Rollno int primary key ,
Name varchar(10),
Branch varchar(25)
);
insert into student1 values
(1,"Jay","Computer Science"),
(2,"Suhani","Electronic and Com"),
(3,"Kriti","Electronic and Com");
select * from student1; 

create table Exam1(
Rollno int,
S_code varchar(10),
Marks int,
P_code varchar(10),
foreign key(Rollno) references student1(Rollno)
); 

insert into Exam1 values
(1,"CS11",50,"CS"),
(1,"CS12",60,"CS"),
(2,"EC101",66,"EC"),
(2,"EC102",70,"EC"),
(3,"EC101",45,"EC"),
(3,"EC102",50,"EC");

select * from Exam1;
