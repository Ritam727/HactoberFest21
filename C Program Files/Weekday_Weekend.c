#include<stdio.h>
int main()
{
	char day;
	printf("Enter the First Letter of the Day : ");
	scanf("%c",&day);
	switch(day)
	{
		case 'M':
		case 'T':
		case 'W':
		case 'F':
			printf("It's a Weekday");
			break;

		case 'S':
			printf("It's a Weekend");
			break;

		default:
		printf("Wrong Input");

	}
	return 0;
}