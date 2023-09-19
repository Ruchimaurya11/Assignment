#include<stdio.h>
int main()
{
	int i,j,num;
	char n='A';
	printf("enter the number");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",n++);
		}
		printf("\n");
	}
	return 0;
	
}
