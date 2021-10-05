#include<stdio.h>
int main()
{
	int N,i,j,k,l,count;
	printf("Enter the value of N : ");
	scanf("%d",&N);
	
	for(i=1; i<=N; i++)
	{
		count=i;
		
		for(j=N-i;j>0; j--)
		{
			printf(" ");
		}
		
		for(k=1; k<=i; k++)
		{
			printf("%d",count);
			count++;
		}
		
		for(l=count-2; l>=i; l--)
		{
			printf("%d",l);
		}
		
		printf("\n");
	}
	return 0;
}

