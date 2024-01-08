#include<stdio.h>
#include<conio.h>

int main()
{
	int num;
	clrscr();

	printf("enter your number:");
	scanf("%d",&num);

	if(num > 0)
	{
	   printf("%d is positive",num);
	}
	else if(num < 0)
	{
	   printf("%d is negative",num);
	}
	else
	{
	   printf("%d is nutral",num);
	}

	getch();
	return 0;
	}
