#include<stdio.h>
#include<conio.h>

int main()
{
float a,b,c;

clrscr();

printf("enter your first number:");
scanf("%f",&a);

printf("enter your second number:");
scanf("%f",&b);

c=a*b;
printf("multiplication of %f and %f is:%f",a,b,c);

getch();
return 0;

}