#include<iostream>
using namespace std;
class calculator{
	int no1,no2;
	float sum;
	double num1,num2;
	public:
		void cal(int no1,int no2)
		{
			this->no1=no1;
			this->no2=no2;
			cout<<"addition"<<no1+no2<<endl;
			
		}
			void cal(double num1,double num2)
		{
			this->num1=num1;
			this->num2=num2;
			cout<<"substraction"<<num1-num2<<endl;
			
		}
			void cal(int no1,double num1 )
		{
			this->no1=no1;
			this->num1=num1;
			cout<<"multiplication"<<no1*num1<<endl;
			
		}
			void cal(double num1,int no2)
		{
			this->num1=num1;
			this->no2=no2;
			cout<<"Division"<<num1/no2<<endl;
			
		}
		
	
};
int main()
{
	calculator obj;
	cout<<"addition:"<<endl;
	obj.cal(3,4);
	cout<<"substraction:"<<endl;
	obj.cal(3.4,2.4);
	cout<<"multiplication:"<<endl;
	obj.cal(3,2.5);
	cout<<"division:"<<endl;
	obj.cal(10.0,2);
	return 0;
}
