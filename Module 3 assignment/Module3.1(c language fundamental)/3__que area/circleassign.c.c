#include<stdio.h>
int main()
{
	float radius,area,pi=3.14;
	printf("enter the radius");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("%f is area of circle",area);
	return 0;
}
