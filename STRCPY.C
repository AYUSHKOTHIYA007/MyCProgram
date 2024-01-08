#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char name1[20]="hey";
    char name2[20]="hello";
    clrscr();
    strcpy(name2,name1);
    printf("the value of name1 is %s",name2);
    getch();
    }