#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter variable 1: ");
	scanf("%d",&a);
	printf("Enter Variable 2: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("Variable 1: %d",a);
    printf("\n");
    printf("Variable 2: %d",b);
    return 0;
}




