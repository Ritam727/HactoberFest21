#include<stdio.h>
int main()
{
	int N;
	int i,j,k;
	printf("Enter N: ");
	scanf("%d",&N);
	for(i=1; i<=N; i++)
	{
		for( j=N-i; j>=0; j--)
		{
			printf(" ");
		}
		for( k=((2*i)-1); k>0; k--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}