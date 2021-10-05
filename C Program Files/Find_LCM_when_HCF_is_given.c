#include<stdio.h>
int main()
{
	int LCM,HCF,a,b;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	printf("Enter the HCF: ");
	scanf("%d",&HCF);
	LCM=(a*b)/HCF;
	printf("LCM is: %d",LCM);
	return 0;
}



