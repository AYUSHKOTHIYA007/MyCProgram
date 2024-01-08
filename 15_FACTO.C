#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,result=1;
clrscr();

	printf("enter a number:");
	scanf("%d",&n);


	for(i=1;i<=n;++i)
	{
	result*=i;
	}
		printf("%d",result);


     getch();
     }