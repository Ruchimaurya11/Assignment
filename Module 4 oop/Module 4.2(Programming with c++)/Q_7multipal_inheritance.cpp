#include<iostream>
using namespace std;
class school{
	string name;
	int age;
	public:
		void get_data()
		{
			cout<<"enter the name and age:";
			cin>>name>>age;
			cout<<"name"<<name<<"\n"<<"age"<<age<<endl;
			
		}
};
class student{
	float per;
	public:
		void get_per()
		{
			cout<<"enter percentage:";
			cin>>per;
			cout<<"percentage"<<per<<"\n";
			
		}
};
class teacher:public student,public school{
	float salary;
	public: void get_salary()
	{
		cout<<"enter salary";
		cin>>salary;
		cout<<"salary"<<salary;
		
	}
};
int main()
{
	teacher obj;
	obj.get_data();
	obj.get_per();
	obj.get_salary();
	return 0;
}
