#include<stdio.h>
#include<math.h>
int main()
{
	int N,i,s=0,x;
	printf("Enter the Number of terms : ");
	scanf("%d",&N);
	for(i=1; i<=N; i++)
	{
		x=pow(10,i)-1;
		s=s+x;
	}
	printf("Sum of %d terms is %d.",N,s);
	return 0;
}