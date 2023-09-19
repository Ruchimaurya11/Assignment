#include<stdio.h>
int main()
{
	int i,num,sum=0;
	printf("enter the 10 number:\n");

	for(i=1;i<=10;i++)
	{
		printf("enter the number\n",i);
	scanf("%d",&num);
		if(i%2==0)
		{
			printf("\n%d",i);
			sum=sum+i;
		}
	}
	printf("sum of even number is :%d\n",sum);
	return 0;
}
