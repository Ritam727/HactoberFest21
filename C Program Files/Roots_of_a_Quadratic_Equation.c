#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,D;
	float x1,x2;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	printf("Enter the value of c: ");
	scanf("%d",&c);
	if(a==0)
	{
		printf("Given Equation is not Quadratic");
	}
	else
	{
		D=(b*b)-(4*a*c);

		if(D>0)
		{
			printf("Roots are Real and Unequal");
			printf("\n");
			x1=(-b + sqrt(D))/(2*a);
		    x2=(-b - sqrt(D))/(2*a);
		    printf("The Roots of the Equation are %f and %f",x1,x2);
		}
		
		else if(D==0)
		{
			printf("Roots are Real and Equal");
			printf("\n");
			x1=(-b + sqrt(D))/(2*a);
		    x2=(-b - sqrt(D))/(2*a);
		    printf("The Roots of the Equation are %f and %f",x1,x2);
		}
		else
		{
			printf("Roots are not Real");
		}

	}
	return 0;
}
