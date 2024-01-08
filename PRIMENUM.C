#include<stdio.h>
#include<conio.h>
int main(){
int num,i,j;
clrscr();
	printf("enter your number:");
	scanf("%d/n",&num);
	printf("primr letter among %d is:",num);
 for(i=2;i<=num;i++){
 for(j=2;j<=i;j++){
 if(i%j==0){
 break;
 }
 }
 if(j==i){
 printf("%d\n",i);
 }
 }
 getch();
 }