#include<stdio.h>
int main()
{
	int a,b,Q,R;
	printf("Enter the Dividend: ");
	scanf("%d",&a);
	printf("Enter the Divisor: ");
	scanf("%d",&b);
	Q=a/b;
	R=a%b;
	printf("The Quotient is: %d",Q);
	printf("\n");
	printf("The Remaider is: %d",R);
	return 0;
}


