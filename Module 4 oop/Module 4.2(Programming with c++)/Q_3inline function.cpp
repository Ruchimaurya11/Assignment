#include<iostream>
using namespace std;
class line{
	public:
		inline int multi(int a,int b)
		{
			return (a*b);
		}
		inline int cube(int x)
		{
			return (x*x*x);
		}
};
int main()
{
	line obj;
	int a,b,n;
	cout<<"enter two values:";
	cin>>a>>b;
	cout<<"enter value for find cube";
	cin>>n;
	cout<<"multiplication is :"<<obj.multi(a,b);
	cout<<"\ncube value is: "<<obj.cube(n);
	return 0;
}
