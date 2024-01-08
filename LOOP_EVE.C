							     #include<stdio.h>
#include<conio.h>

int main()
{
int i,num;
clrscr();
printf("enter a number:");
scanf("%d",&num);
printf("even number beetwen 1 and %d is:\n",num);
for(i=1;i<=num;i++){
if(i%2==0){
printf("%d\n",i);
}
}
printf("odd number beetwen 1 and %d is:\n",num);
for(i=1;i<=num;i++){
if(i%2!=0){
printf("%d\n",i);
}
}
getch();
return 0;
}
