#include<stdio.h>
int main()
{
	int i,j,m;
	for(i=1;i<=5;i++)
	{
		for(m=4;m>=i;m--)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
