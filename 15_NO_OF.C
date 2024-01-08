#include<stdio.h>
#include<conio.h>

int main()
{
int month;
printf("enter your month:");
scanf("%d",&month);

switch(month){
case 1: case 3: case 5: case 7: case 8: case 10: case 12:
printf("no. of days:31");
break;
case 4: case 6: case 9: case 11:
printf("no of days is:30");
break;
case 2:
printf("no of days is:28 or 29(leap year)");
break;
deafult:
printf("month is in valid");
}
getch();
}