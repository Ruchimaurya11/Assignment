#include<stdio.h>
int main()
{
	int no1,no2,sum;
	
	printf("enter the no for calculation");
	scanf("%d%d",&no1,&no2);
	sum=no1+no2;
	printf("%d is addition of %dand %d\n",sum,no1,no2);
	sum=no1-no2;
	printf("%d is substraction of %d and %d\n",sum,no1,no2);
	sum=no1*no2;
	printf("%d is multiflication of %dand %d\n",sum,no1,no2);
	sum=no1/no2;
	printf("%d is divition of %dand %d\n",sum,no1,no2);
	sum=no1%no2;
	printf("%d is modulo of %dand %d\n",sum,no1,no2);
	
}
