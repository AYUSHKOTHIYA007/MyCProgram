#include<stdio.h>
#include<conio.h>
int main()
{
int num,reversed=0;
clrscr();
printf("enter a 5 digit number:");
scanf("%d",&num);
while(num>0){
reversed= reversed * 10 + num % 10;
num= num / 10;
}
printf("reversed number is:%u\n",reversed);
getch();
}