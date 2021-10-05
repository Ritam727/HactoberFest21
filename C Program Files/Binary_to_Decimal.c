#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,R;
	long int N,S=0;
	printf("Enter the Number : ");
	scanf("%ld",&N);
	while(N>0)
	{
		R=N%10;
		S=S+R*pow(2,i);
		N=N/10;
		i++;
	}
	printf("The Decimal From is %ld",S);
	return 0;
}