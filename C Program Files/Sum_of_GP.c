#include<stdio.h>
#include<math.h>
int main()
{
	float a,r,n,S;
	printf("Enter the number of terms : ");
    scanf("%f",&n);
	printf("Enter the first term : ");
	scanf("%f",&a);
	printf("Enter the Common ratio : ");
	scanf("%f",&r);
	if(r!=1)
	{
		S=a*(((pow(r,n))-1)/(r-1));
	}
	if (r==1)
	{
		S=a*n;
	}
	
	printf("The Sum of GP is : %.2f",S);
	return 0;
}