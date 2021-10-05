#include<stdio.h>
int main()
{
	int N,i,c,d,j,p,k;
	printf("Enter the Number : ");
	scanf("%d",&N);
	for(i=2; i<=N;i++)
	{
		c=0;
		for(k=1; k<=i; k++)
		{
			if(i%k==0)
			{
				c++;
			}
		}

		if(c==2)
		{
			p=N-i;
			d=0;
			for(j=1; j<=p; j++)
			{
				if(p%j==0)
				{
					d++;
				}
			}
			if(d==2)
				{
					printf("The two numbers are : %d and %d \n",i,p);
				}
		}
	}
}
