#include<stdio.h>
void add();
int main()
{
	int n,i,num[100];
	printf("how many elements you want to enter");
	scanf("%d",&n);
	printf("enter elments");
	return 0;
}
void add()
{
	int i,n,num[100];
	for(i=0;i<=n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",num[i]);
	}
	for(i=1;i<n;i++)
	{
		if(num[0]<num[i]);
		{
			num[0]=num[i];
		}
	}
	printf("\n %d is largest from array",num[0]);
}
