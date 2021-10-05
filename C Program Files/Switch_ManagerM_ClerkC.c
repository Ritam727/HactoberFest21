#include<stdio.h>
int main()
{
	float B_Sal;
	char Designation;
	printf("Enter the Designation Code : ");
	scanf("%c",&Designation);
	printf("Enter the Basic Salary : ");
	scanf("%f",&B_Sal);

	switch(Designation)
	{
		case 'M':
			printf("The Final Salary is : %.2f",B_Sal+B_Sal*0.2);
			break;

		case 'C':
			printf("The Final Salary is : %.2f",B_Sal+B_Sal*0.1);
			break;

		default:
			printf("Incorrect Designation Code ");

	}
	return 0;

}
