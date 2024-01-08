
#include<stdio.h>
#include<conio.h>

int main()
{
   int a[2][2],b[2][2],i,j;
   clrscr();
   for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	printf("enter a (%d)(%d):",i,j);
	scanf("%d",&a[i][j]);
	}
   }
   printf("matrix(a)");
    for(i=0;i<2;i++){
    printf("\n");
	for(j=0;j<2;j++){

	printf("\t%d",a[i][j]);
	}
    }
     printf("\n");
    for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	printf("enter b (%d)(%d):",i,j);
	scanf("%d",&b[i][j]);
	}
   }
   printf("matrix(b)");
    for(i=0;i<2;i++){
    printf("\n");
	for(j=0;j<2;j++){

	printf("\t%d",b[i][j]);
	}
    }
    printf("\nmatrix(a)+matrix(b)");
    for(i=0;i<2;i++){
    printf("\n");
	for(j=0;j<2;j++){

	printf("\t%d",a[i][j]+b[i][j]);
	}
    }
   getch();
   }