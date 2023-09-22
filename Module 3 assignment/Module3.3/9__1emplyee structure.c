#include<stdio.h>
struct employee{
	int e_no;
	char e_name[30];
	char e_address[30];
	int e_age;
};
int main()
{
	struct employee emp;
	printf("\n Employee Details");
	printf("\n Enter Employee number:");
	scanf("%d",&emp.e_no);
	printf("\n Enter Employee Name:");
	scanf("%s",&emp.e_name);
	printf("\n Enter Employee Address:");
	scanf("%s",&emp.e_address);
	printf("\n Enter Employee Age:");
	scanf("%d",&emp.e_age);
	
	printf("\n Employee Dtails is:");
	printf("\n Employee Number :%d",emp.e_no);
	printf("\n Employee Name:%s",emp.e_name);
	printf("\n Employee Address: %s",emp.e_address);
	printf("\n Employee Age: %d",emp.e_age);
	return 0;
}
