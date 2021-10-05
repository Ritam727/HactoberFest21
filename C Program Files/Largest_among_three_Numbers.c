#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Number 1: ");
	scanf("%d",&a);
	printf("Enter Number 2: ");
	scanf("%d",&b);
	printf("Enter Number 3: ");
	scanf("%d",&c);

	if(a>=b && a>=c)
	{
		printf("Maximum Value is: %d",a);
	}

	else if(b>=c && b>=a)
	{
		printf("Maximum Value is: %d",b);
	}

	else
	{
		printf("Maximum Value is: %d",c);
	}

	return 0;
}


