#include<stdio.h>
int main()
{
	int N,R,rev=0,i=1,t;
	printf("Enter a number: ");
	scanf("%d",&N);
	t=N;
	while(N>0)
	{
		R=N%10;
		rev=rev+(R*i);
		i=i*10;
		N=N/10;
	}
	if(rev==t)
	{
		printf("Yes, Palindrome");
	}
	else
	{
		printf("No, Palindrome");
	}
	return 0;

}