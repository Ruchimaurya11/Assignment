#include<stdio.h>
struct employee{
	int e_no,e_age;
	char e_name[30],e_address[30];
	
	
};
int main()
{
	struct employee emp[5];
	int i;
	for(i=1;i<=5;i++)
	{
		printf("\n Enter details for %d employee:\n",i);
		printf("\n Enter employee number:");
		scanf("%d",&emp[i].e_no);
		printf("\n Enter employee Name:");
		scanf("%s",&emp[i].e_name);
		printf("Enter employee address:");
		scanf("%s",&emp[i].e_address);
		printf("Enter employee age:");
		scanf("%d",&emp[i].e_age);
		
	}
	printf("\n---------------Employee Datails---------------\n",i);
	for(i=0;i<5;i++)
	{
		printf("\nEmployee Number:%d",emp[i].e_no);
		printf("\n Employee Name:%s",emp[i].e_name);
		printf("\n Employee Address : %s",emp[i].e_address);
		printf("\n Employee Age: %d",emp[i].e_age);
	}
	return 0;
}
