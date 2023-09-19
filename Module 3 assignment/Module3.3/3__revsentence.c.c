#include<stdio.h>
int main()
{
 printf("Enter any sentence");
 revsen();
 return 0;
}
void revsen()
{
	char ch;
	scanf("%c",&ch);
	if(ch!='\n')
	{
		revsen();
		printf("%c",ch);
	}
}
