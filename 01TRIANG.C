#include<stdio.h>
#include<conio.h>

int main()
{
int n,i,j;
printf("enter no of rows:");
scanf("%d",&n);

	for(i=1;i<=n;i++){
	   for(j=1;j<=i;j++){
	       if((i+j)%2==0){
	       printf("0");
	       }else{
	       printf("1");
	       }
		}
		printf("\n");
		}
		return 0;
		getch();
		}
