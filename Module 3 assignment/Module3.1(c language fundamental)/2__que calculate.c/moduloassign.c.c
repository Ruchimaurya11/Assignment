#include<stdio.h>
int main()
{
	int num1,num2,sum;
	printf("enter the value for modulo");
	scanf("%d%d",&num1,&num2);
	sum=num1%num2;
	printf("%d is modulo of %d and %d",sum,num1,num2);
	return 0;
}
