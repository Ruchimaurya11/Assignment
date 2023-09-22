#include<stdio.h>
int main()
{
	int number[100],n,i,j,temp;
	int ch;
	printf("1 ascending order \n2.decending order\n");
	printf("\n Enter your choice:\n");
	switch(ch)
	{
		case 1:
			printf("How many elements you want to enter ");
			scanf("%d",&n);
			printf("\n Enter Elements");
			for(i=0;i<n;i++)
			{
				scanf("%d",&number[i]);
			}
			printf("\n Before Ascending Order Array is:\n");
			for(i=0;i<n;i++)
			{
				printf("%d\t",number[i]);
			}
			for(i=0;i<n;i++)
			{
				for(j=i;j<n;j++)
				{
					if(number[i]>number[j])
					{
						temp=number[i];
						number[i]=number[j];
						number[j]=temp;
					}
				}
		    }
				printf("\n \n After ascending order array is:\n");
				for(i=0;i<n;i++)
				{
					printf("%d\t",&number[i]);
				}
				break;
			case 2:
			printf("How many elements you want to enter ");
			scanf("%d",&n);
			printf("\n Enter Elements");
			for(i=0;i<n;i++)
			{
				scanf("%d",&number[i]);
			}
			printf("\n Before Descending Order Array is:\n");
			for(i=0;i<n;i++)
			{
				printf("%d\t",number[i]);
			}
			for(i=0;i<n;i++)
			{
				for(j=i;j<n;j++)
				{
					if(number[i]>number[j])
					{
						temp=number[i];
						number[i]=number[j];
						number[j]=temp;
					}
				}
			}
				printf("\n \n After Descending order array is:\n");
				for(i=0;i<n;i++)
				{
					printf("%d\t",&number[i]);
				}
				break;
				default:
					printf("\n Invalid choice");
					break;
	}
	return 0;
}

