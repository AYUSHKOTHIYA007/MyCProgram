#include<stdio.h>
#include<conio.h>

int main()
{
	int num;
	clrscr();


	printf("enter your number:");
	scanf("%d",&num);

	if(num % 2 == 0)
	{
	printf("%d is even number",num);
	}
	else
	{
	printf("%d is odd number",num);
	}
	getch();
	return 0;
	}