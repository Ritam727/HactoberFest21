#include<stdio.h>
enum day {Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};

int main()
{
	int day;
	printf("Enter the Code of the Day : ");
	scanf("%d",&day);
	switch(day)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			printf("It's a Weekday");
			break;

		case 5:
		case 6:
			printf("It's a Weekend");
			break;

		default:
			printf("Wrong Input");

	}
	return 0;
}