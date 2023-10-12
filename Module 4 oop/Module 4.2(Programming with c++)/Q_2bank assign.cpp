#include<iostream>
using namespace std;
class bank_account{
	int act_no,bal_amt,deposite,withdraw;
	string depositor,type_ac;
	public :
		void data()
		{
			cout<<"Enter name of the depositor:";
			cin>>depositor;
			
			cout<<"Enter account number:";
			cin>>act_no;
			
			cout<<"Enter Type of Account:";
			cin>>type_ac;
			
			cout<<"Enter balance amount in the account:";
			cin>>bal_amt;
			
		}
		void deposited()
		{
			cout<<endl<<"Enter deposited amount :";
			cin>>deposite;
			bal_amt+=deposite;
		}
		void withdraws()
		{
			cout<<"Enter withdraw an anount after checking balance:";
			cin>>withdraw;
			if (bal_amt>withdraw)
			{
				bal_amt-=withdraw;
			}
			else{
				cout<<"cannot withdraw ammount\n";
				
			}
		}
		void display()
		{
			cout<<"\n depositer name....."<<depositor<<endl;
			cout<<"balance amount..."<<bal_amt<<endl;
		}
};
int main()
{
	bank_account obj;
	obj.data();
	obj.deposited();
	obj.withdraws();
	obj.display();
	return 0;
	
}
