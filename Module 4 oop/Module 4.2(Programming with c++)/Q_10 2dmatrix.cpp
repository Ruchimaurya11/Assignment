#include<iostream>
using namespace std;
class matrix{
	int a[2][2];
	public:
		void accept();
		void display();
		void operator+(matrix x);
		
};
void matrix::accept()
{
	int i,j;
	cout<<"\n Enter Matrix Element(2*2): \n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<" ";
			cin>>a[i][j];
		}
	}
}
void matrix::display()
{
	int i,j;
	for(i=0;i<2;i++)
	{
		cout<<" ";
		for(j=0;j<2;j++)
		{
			cout<<a[i][j]<<"\t";
			
		}
		cout<<"\n";
	}
}
void matrix::operator +(matrix x)
{
	int max[2][2];
	int i,j;
	for(i=0;i<2;i++)
	{
		
		for(j=0;j<2;j++)
		{
			max[i][j]=a[i][j]+x.a[i][j];
		}
	}
	cout<<"\n Addition of matrix : \n\n";
	for(i=0;i<2;i++)
	{
		cout<<" ";
		for(j=0;j<2;j++)
		{
			cout<<max[i][j]<<"\t";
			
		}
		cout<<"\n";
		
	}
}
int main()
{
	matrix m,n;
	m.accept();
	n.accept();
	cout<<"\n first matrix : \n";
	m.display();
	cout<<"\n second matrix: \n";
	n.display();
	m+n;
	return 0;
}
