#include<stdio.h>
int main()
{
	
	int i,n,r,s=0;
	printf("\n enter the number\n");
	scanf("%d",&n);
	for(i=n;i>0;i)
	{
		r=i%10;
		s=s*10+r;
		i=i/10;
	}
	printf("\n the reverse nuber of %d is %d",n,s);
}
