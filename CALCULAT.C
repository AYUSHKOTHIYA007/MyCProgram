#include<stdio.h>
#include<conio.h>
int main(){
	int a,b;
	char c;

	clrscr();
	printf("enter your first number:");
	scanf("%d",&a);
	printf("enter the operation:");
	scanf("%c\n",&c);
	printf("enter your second number:");
	scanf("%d\n",&b);

switch(c)
{
case'+':
printf("%d",a+b);
break;

case'-':
printf("%d",a-b);
break;

case'*':
printf("%d",a*b);
break;

case'/':
printf("%d",a/b);
break;
//default:
//printf("the oprator is not valid");
}
 getch();
 }