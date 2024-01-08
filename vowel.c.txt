include<stdio.h>
#include<conio.h>

int main()
{

char word;
clrscr();

printf("enter your alphabet:");
scanf("%c",&word);

switch(word){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
printf("%c is vowel.\n",word);
break;
defult:
 printf("%c is constraint",word);
 }
 getch();
 }
