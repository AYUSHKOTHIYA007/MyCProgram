#include<stdio.h>
#include<conio.h>

int main(){
int n,r,sum=0,temp;
clrscr();
printf("enter a number:");
scanf("%d",&n);

temp=n;
while(n>0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(temp==sum)
{
printf("armtrong number");
}
else{
printf(" not armstrong number");
}
getch();
}

