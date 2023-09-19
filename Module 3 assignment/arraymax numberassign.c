#include<stdio.h>
int main()
{
	int array[100],max,n,i,num=1;
	printf("enter the number of element in array\n");
	scanf("%d",&n);
	printf("enter %d integers\n",n);
	for(i=0;i<n;i++)
	scanf("%d",array[i]);
	max=array[0];
	for(i=1;i<n;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
			num=i+1;
		}
	}printf("max number is present at location%d and its value is %d.\n",num,max);
    return 0;
}
