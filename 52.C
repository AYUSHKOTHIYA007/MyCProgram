#include<stdio.h>
#include<conio.h>

	int main()
	{
	double base,exp,result=1.0;
	printf("enter:");
	scanf("%lf",&base);
	printf("enter:");
	scanf("%lf",&exp);

	for(int i=0;i<exp;i++){
	result*=base;
	}
	printf("%lf\n",result);
	 getch();
	 }