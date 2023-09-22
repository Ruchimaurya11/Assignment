#include<stdio.h>
int main()
{
	int num1[2][2],num2[2][2],result[2][2],i,j;
	printf("enter 4 values for first array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&num1[i][j]);
		}
	}
	printf("enter 4 values for second array");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&num2[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			result[i][j]=num1[i][j]+num2[i][j];
		}
	}
	printf("\n your result array is \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",result[i][j]);
		}
		printf("\n");
          
	}
	return 0;
	
}
