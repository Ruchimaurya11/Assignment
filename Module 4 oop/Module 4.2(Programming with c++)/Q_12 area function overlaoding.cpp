#include<iostream>
using namespace std;
class programme{
	int l,r,w;
	double h,b;
	public:
		void area(int length,int width)
		{
			l=length;
			w=width;
			cout<<" area of rectangle"<<l*w<<endl;
		}
		void area(double height,double base)
		{
			h=height;
			b=base;
			cout<<"area of triangle"<<0.5*h*b<<endl;
			
		}
		void area(int radius)
		{
			r=radius;
			cout<<"area of circle"<<3.14*r*r<<endl;
		}
};s
int main()
{
	programme obj;
	cout<<"rectangle"<<endl;
	obj.area(4,5);
	cout<<"tringle"<<endl;
	obj.area(3.5,4.5);
	cout<<"circle"<<endl;
	obj.area(5);
	return 0;
}

