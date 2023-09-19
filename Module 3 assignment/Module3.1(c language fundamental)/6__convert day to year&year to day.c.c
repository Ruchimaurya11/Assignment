#include<stdio.h>
int main()
{
	int year,day,years,days;
	printf("enter the day in to convert year");
	scanf("%d",&day);
	year=day/365;
	printf("%d is year ",year);
	printf("enter the year in to convert days");
	scanf("%d",&years);
	days=years*365;
	printf("%d is days",days);
	return 0;
}
