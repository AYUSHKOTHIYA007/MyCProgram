#include<stdio.h>
#include<conio.h>
int main()
{
int a;
int b,c;
clrscr();
printf("enter your first value:");
scanf("%d",&a);
printf("enter your second value:");
scanf("%d",&b);
printf("addition of %d and %d is:%d\n",a,b,c=a+b);
printf("substraction of %d and %d is:%d\n",a,b,c=a-b);
printf("division of %d and %d is:%d\n",a,b,c=a/b);
printf("multiplication of %d and %d is:%d",a,b,c=a*b);
getch();
}
