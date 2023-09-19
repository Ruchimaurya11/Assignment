#include<stdio.h>
int main()
{
	int choice;
	printf("1 monday 2 tuesday 3 wednesday 4 thursday 5 friday 6 saturday 7 sunday\n");
	printf("enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
	        printf("monday");
		    break;
		case 2:
	        printf("tuesday");
		    break;
	    case 3:
		    printf("wednesday");
			break;
		
		case 4:
			printf("thursday");
			break;
		
		case 5:
		    printf("friday");
			break;
		
		case 6:
			printf("satureday");
			break;
		
		case 7:
		printf("sunday");
			break;
		
		
	}
	
}
