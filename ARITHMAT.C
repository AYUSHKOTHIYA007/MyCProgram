#include<stdio.h>
#include<conio.h>

int main()
{
int choice;
float n,n1,result;
clrscr();

printf("menu driven arithmatic calculator\n");
	printf("1.addition\n");
	printf("2.substraction\n");
	printf("3.multiplication\n");
	printf("4.division\n");
	printf("5.modulus\n");

	printf("enter your choice:");
	scanf("%d",&choice);

	printf("enter two number:");
	scanf("%f%f",&n,&n1);

	switch(choice){
	case 1:
		result=n+n1;
		printf("result: %f",result);
		break;
	case 2:
		result=n-n1;
		printf("result: %f",result);
		break;
	case 3:
		result=n*n1;
		printf("result: %f",result);
		break;
	case 4:
		result=n/n1;
		printf("result: %f",result);
		break;
		case 5:
		result=(int)n%(int)n1;
		printf("result: %f",result);
		break;
		      }
		      getch();
		      }