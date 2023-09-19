#include<stdio.h>
int main()
{
	int i,n,sum=0,temp=0;
	for(i=1;i<=10;i++)
	{
		printf("enter %d value",i);
		scanf("%d",&n);
		if(n%2==0)
		{
		    temp++;
		}
	}
	printf("total even nubers are %d",temp);
	return 0;
}
