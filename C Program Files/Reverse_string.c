#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int i,j,l;
	printf("Enter the names : ");
	gets(a);
	l=strlen(a);
	for(j=0; j<l; j++)
	{
		b[j]=a[(l-j-1)];
	}
	for(i=0; i<l; i++)
	{
		printf("%c",b[i]);
	}
	return 0;

}