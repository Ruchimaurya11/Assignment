#include<stdio.h>
#include<string.h>
struct employee{
	int id;
	char name[100];
};
union employee1{
	int e_id;
	char e_name;
};
int main()
{
	struct employee s1;
	union employee1 u1;
	
	printf("enter id for first employee and name\n");
	scanf("%d %s",&s1.id,&s1.name);
	printf("name of employee is %s and id is % d\n",s1.name,s1.id);
	printf("enter id\n");
	scanf("%d",&u1.e_id);
	printf("id is %d\n",u1.e_id);
	printf("enter name\n");
	scanf("%s",&u1.e_name);
	printf("name is %s",u1.e_name);
	
	return 0;
	
	
	
}
