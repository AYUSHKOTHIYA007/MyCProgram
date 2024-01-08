#include<stdio.h>
#include<conio.h>
int main()
{
int i,a;
clrscr();

	printf("enter a number:");
	scanf("%d",&a);
	for(i=1;i<=a;++i)
	{
	if(a%i==0)
	{
		printf("%d",i);
	}
     }
     getch();
     }