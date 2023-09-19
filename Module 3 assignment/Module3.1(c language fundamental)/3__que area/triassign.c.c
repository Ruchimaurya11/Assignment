#include<stdio.h>
int main()
{
	float height,base,area;
	printf("enter the value");
	scanf("%f%f",&height,&base);
	area=0.5*height*base;
	printf("%.2f is area of triangle",area);
	return 0;
}
