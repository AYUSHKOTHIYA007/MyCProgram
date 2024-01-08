#include<stdio.h>
#include<conio.h>

     int main()
     {
     int n1,n2,n3,max;
     clrscr();
     printf("enter your first number:");
     scanf("%d",&n1);

     printf("enter your second number:");
     scanf("%d",&n2);

      printf("enter your third number:");
     scanf("%d",&n3);
	max=n1;
     if(n2>max) {
     max=n2;
     }
     if(n3>max)
     {
     max=n3;
     }
     printf("maximum number is:%d",max) ;
     getch();
     }