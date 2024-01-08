#include<conio.h>
#include<stdio.h>
int main(){

int cppm,ic,dpa,cs,maths;
int om;
int tm=500;
//double percentage=om/5;
clrscr();
printf("enter your cppm marks:");
scanf("%d",&cppm);

printf("enter your ic marks:");
scanf("%d",&ic);

printf("enter your dpa marks:");
scanf("%d",&dpa);

printf("enter your cppm marks:");
scanf("%d",&maths);

printf("enter your cs marks:");
scanf("%d",&cs);

printf("total mark is:%d\n",tm);

om=cppm+dpa+cs+ic+maths;
printf("obtain marks is:%d\n",om);

printf("your percentage is:%d%\n",om/5);

getch();
}
