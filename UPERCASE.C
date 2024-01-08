#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
	char input[100];
	clrscr();

	printf("enter lowercase:");
	scanf("%s\n",input);
	strupr(input);
	printf("uper case is:%s",input);
	getch();
	}