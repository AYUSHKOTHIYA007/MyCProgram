#include<stdio.h>
#include<conio.h>

int main()
{
int num,i;
clrscr();
	printf("enter your number:");
	scanf("%d\n",&num);
printf("even number is:\n");
for(i=1;i <= num;i++){
if(i%2==0){
printf("%d\n",i);
}
}
 printf("odd number is:\n");
for(i=1;i <= num;i++){
if(i%2!=0){
printf("%d\n",i);
}
}
getch();
}
