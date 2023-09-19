#include<stdio.h>
int main()
{
	int i,num,sum=0;
	printf("enter the number 10 numbers:");
	for(i=1;i<=10;i++)
	{
		printf("\n enter number%d\n",i);
		scanf("%d",&num);
		if(num%2!=0)
		{
			printf("\n%d",i);
			sum=sum+i;
		}
	}printf("sum of odd number is:%d\n",sum);
	return 0;
}
