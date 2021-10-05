#include<stdio.h>
int main()
{
	float B_Sal;
	char Designation;
	int Allowance=0;
	printf("Enter the Designation Code : ");
	scanf("%c",&Designation);
	printf("Enter the Basic Salary : ");
	scanf("%f",&B_Sal);

	switch(Designation)
	{
		case 'M':
			Allowance=5000;

		case 'O':
			printf("The Final Salary is : %.2f",B_Sal+B_Sal*0.2+Allowance);
			break;

		case 'C':
			Allowance=2000;
			
		case 'P':	
			printf("The Final Salary is : %.2f",B_Sal+B_Sal*0.1+Allowance);
			break;

		default:
			printf("Incorrect Designation Code ");

	}
	return 0;

}