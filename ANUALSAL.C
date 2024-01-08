#include<stdio.h>
#include<conio.h>

int main()
{
float ts,pf,mi,pt,gs,ai;
clrscr();

printf("enter your total salry:");
scanf("%f",&ts);

pf=0.1 * ts;
mi=500;
pt=200;

gs=ts-(pf+mi+pt);
printf("your gross salary is:%f\n",gs);

ai=gs * 12;
printf("your anual salary is:%f\n",ai);

getch();

}