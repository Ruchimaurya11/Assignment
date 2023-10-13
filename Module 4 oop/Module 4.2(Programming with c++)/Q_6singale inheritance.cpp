#include<iostream>
using namespace std;
class cricket {
	public:
		string name;
		int Totalrun,avgruns,bestperformance,totalmatches;
		
		void inputdata()
		{
			cout<<"Enter name:"<<endl;
			cin>>name;
			cout<<"Enter total runs:\n";
			cin>>Totalrun;
			cout<<"Enter number of matches played:\n";
			cin>>totalmatches;
			cout<<"Enter best score:\n";
			cin>>bestperformance;
			
		
		}
		void avg()
		{
			avgruns=Totalrun/totalmatches;
			cout<<"average:"<<avgruns<<endl;
			
		}
};
class batsman: public cricket
{
	public:
		void display()
		{
			cout<<"-----cricketer Detail-------\n";
			cout<<"name of cricketer:    "<<endl;
			cin>>name;
			cout<<"Enter Total runs:"<<endl;
			cin>>Totalrun;
			cout<<"Enter number of matches played:"<<endl;
			cin>>totalmatches;
			cout<<"Enter best score: "<<endl;
			cin>>bestperformance;
			
		}
		void avg()
		{
			avgruns=Totalrun/totalmatches;
			cout<<"average"<<avgruns<<endl;
			
		}
};
class batsman : public cricket
{
	public:
		void display()
		{
			cout<<"--------cricketer detail-----------\n";
			cout<<"Name of cricketer:"<<name<<endl;
			cout<<"Total runs of cricketer:"<<totalruns<<endl;
			cout<<"Best score of cricketer:"<<bestperformance<<endl;
			cout<<"Average of cricketer:"<<avgruns<<endl;
				
			}
};
int main()
{
	batsman obj;
	obj.inputdata();
	obj.avg();
	obj.display();
	return 0;
}
