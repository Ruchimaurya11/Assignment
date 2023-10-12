#include<iostream>
using namespace std;
class operation{
	int num1,num2;
	public:
		void get()
		{
			cout<<"enter to number";
			cin>>num1>>num2;
	}
		friend void swap(operation t);

};
void swap(operation)
{        
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
}
int main()
{
	operation obj;
	obj.get();
	swap(obj);
	return 0;
}
