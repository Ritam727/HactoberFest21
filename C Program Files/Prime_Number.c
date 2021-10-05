#include<stdio.h>
int main()
{
	int N;
	int c=0;
	int i=0;
	printf("Enter a Number: ");
	scanf("%d",&N);
	for(i=1; i<=N; i++)
	{
		if(N%i==0)
		{
			c++;
		}
	}

	if(c==2)
	{
		printf("Prime Number");
	}
	else
	{
		printf("Not a Prime Number");
	}
	return 0;

}