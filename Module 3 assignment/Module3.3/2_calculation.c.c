#include<stdio.h>
void add();
void sub();
void multi();
void divition();
int main()

{
	int n1,n2,sum,choice;
	char c;
	do{
		printf("-----menu-----\n");
		printf("1 addition \n2 substraction\n 3 multiplication\n 4 divition\n");
		printf("enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			    add();
			    break;
			case 2:
			    sub();
				break;
			case 3:
			    multi();
				break;
			case 4:
			    divition();
				break;
			default :
			    printf("enter valid choice");	    
		}
		printf("\n do you want to perform again :\n y for yes\n n for no\n");
		scanf("%c",&c);
	}while(c=='y');

}

void add()
{
	int n1,n2,sum;
	printf("enter the number");
	scanf("%d%d",&n1,&n2);
	sum=n1+n2;
	printf("%d is sum of %d and %d",sum,n1,n2);
	
}
void sub()
{
	int n1,n2,sum;
	printf("enter the number");
	scanf("%d%d",&n1,&n2);
	sum=n1-n2;
	printf("%d is substraction of %d and %d",sum,n1,n2);
	
}
void multi()
{
	int n1,n2,sum;
	printf("enter the number");
	scanf("%d%d",&n1,&n2);
	sum=n1*n2;
	printf("%d is multiplication of %d and %d",sum,n1,n2);
}
void divition()
{
	int n1,n2,sum;
	printf("enter the number");
	scanf("%d%d",&n1,&n2);
	sum=n1/n2;
	printf("%d is divition of %d and %d",sum,n1,n2);
}

