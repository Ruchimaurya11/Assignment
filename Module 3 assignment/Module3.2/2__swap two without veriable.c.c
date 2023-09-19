#include<stdio.h>
int main()
{
	int a=10,b=20;
	printf("before swap the value is a=%d,b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swap value is a=%d,b=%d",a,b);
	return 0;
}
