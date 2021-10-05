#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,i;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	printf("%d ",b);

	for(i=2; i<=n; i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;

	}
	return 0;



}