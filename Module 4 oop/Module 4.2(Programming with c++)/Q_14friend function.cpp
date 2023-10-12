#include<iostream>
using namespace std;
class operation{
	int num1,num2;
	public:
		void get
		{
			cout<<"enter to number";
			cin>>num1>>num2;
		}
		friend void area(operation);

};
void area(operation t)
{
	if(num1>=num2)
	cout<<"num1 is max number";
	else
	cout<<"num2 is max";
}
int main()
{
	operation obj;
	obj.get();
	area(obj);
	return 0;
}
