#include<stdio.h>
int main()
{
	int i,n,temp=0;
	printf("enter the 10 number:\n\n");
	for(i=1;i<=10;i++)
	{
		printf("enter %d value",i);
		scanf("%d",&n);
	    if(n%2!=0)
	    {
	        temp++;		
		}
	}
	printf("total odd number are: %d ",temp);
	return 0;
}
