#include<stdio.h>
int main()
{
	int LCM,HCF,a,b;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	printf("Enter the LCM: ");
	scanf("%d",&LCM);
	HCF=(a*b)/LCM;
	printf("HCF is: %d",HCF);
	return 0;
}