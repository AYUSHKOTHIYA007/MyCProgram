#include<stdio.h>
#include<conio.h>

int main()
{
int wa,da,choice;
int ob=20000;
clrscr();

printf("welcome to atm\n");
printf("1.cheak balance\n");
printf("2.withdrawl amount\n");
printf("3.deposit amount\n");
printf("4.exit\n");

	printf("enter your choice:");
	scanf("%d",&choice);

switch(choice)
{
case 1:
	printf("your amount is:%d\n",ob);
	break;

case 2:
	printf("enter your withdrawl amount:");
	scanf("%d",&wa);

	printf("your current balance is:%d",ob-wa);
	break;

case 3:
	printf("enter your deposit amount:");
	scanf("%d",&da);

	printf("your current balance is:%d",ob+da);
	break;
case 4:
       printf("thank you for using atm");
       break;

defult:
	printf("your choice is invalid");
	break;
	}
	getch();
	return 0;
	}

