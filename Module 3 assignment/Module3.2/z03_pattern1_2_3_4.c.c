#include<stdio.h>
int main()
{
	int i,j,n=1,num;
	printf("enter the value ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",n++);
		}
		printf("\n");
	}
	return 0;
}
