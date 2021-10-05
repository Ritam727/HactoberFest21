#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter variable 1: ");
	scanf("%d",&a);
	printf("Enter Variable 2: ");
    scanf("%d",&b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("Variable 1: %d",a);
    printf("\n");
    printf("Variable 2: %d",b);
    return 0;
}


