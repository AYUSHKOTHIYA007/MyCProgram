#include<stdio.h>
#include<conio.h>
int main()
{
int accno,ob,wa,cb,da;
clrscr();

printf("WELCOME TO BANK OF BARODA");

printf("enter your account no:");
scanf("%d\n",&accno);

printf("enter your opening balance:");
scanf("%d\n",&ob);

printf("how much amount do you want to withdraw:");
scanf("%d\n",wa);
 cb=ob-wa;
printf("your current amount is:%d\n",cb);

printf("how much amount do you want to deposite:");
scanf("%d\n",&da);

printf("your current balance is:%d\n",cb+da);

getch();
return 0;

}