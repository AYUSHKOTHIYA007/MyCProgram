#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()  {
    char fname[20]="KOTHIYA ";
    char mname[20]="AYUSH ";
    clrscr();

    strcat(fname,mname);

    printf("my name is %s",fname);
    getch();
    }