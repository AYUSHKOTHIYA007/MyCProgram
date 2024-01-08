#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float x;
    printf("enter your number:");
    scanf("%f",x);

    int result1=abs(x);
    printf("absoulate value of %f is:%d\n",x,result1);

    int result2=floor(x);
    printf("the floor value of %f is:%d\n",x,result2);

    int a=ceil(x);
    printf("ceil value of %f is:%d\n",x,a);

   // int b=round(x);
   // printf("round value of %f is:%d",x,b);

    getch();
     }