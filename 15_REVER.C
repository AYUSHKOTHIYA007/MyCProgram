#include<stdio.h>
#include<conio.h>

int main()
{
int n;
printf("enter your number:");
scanf("%d",&n);
printf("reverse order from %d to 1:\n",n);

while(n>=1)
{
printf("%d",n);
n--;
}
printf("\n");
getch();
}