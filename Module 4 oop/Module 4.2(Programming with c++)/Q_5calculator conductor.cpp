#include<iostream >
using namespace std;
int main()
{
	char choice;
	int no1,no2,sum;
	cout<<"enter choice"<<"+ for addition\n - for substraction \n * for multiplcation \n/ for divition\n";
	cin>>choice;
	cout<<"enter 2 value for calculation\n";
	cin>>no1>>no2;
	switch(choice)
	{
		case'+':
			sum=no1+no2;
			
			cout<<sum;
			
			
	}
	
}
