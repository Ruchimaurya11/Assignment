#include<stdio.h>
long int fact(int n);
int main()
{
	int n;
	printf("Enter the integer:");
	scanf("%d",&n);
	printf("Factorial of %d=%1d",n,fact(n));
	return 0;
}
long int fact(int n)
{
	if(n>=1)
	return n*fect(n-1);
	else
	return 1;
}
