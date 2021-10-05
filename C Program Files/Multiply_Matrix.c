#include<stdio.h>

void Read_matrix (int d[10][10],int R,int C)
{
	int i,j;
	printf("Enter the Array elements");
	printf("\n");
	for(i=0; i<R; i++)
	{
		for(j=0; j<C; j++)
		{
			scanf("%d",&d[i][j]);
		}
	}
}

void Multiply_matrix (int a[10][10],int b[10][10], int c[10][10] ,int R, int C )
{
	int i,j;
	for(i=0; i<R; i++)
	{
		for(j=0; j<C; j++)
		{
			c[i][j]= a[i][j] * b[i][j];
		}
	}
}

void Write_matrix (int c[10][10],int R,int C)
{
	int i,j;
	printf("Product of array elements is : ");
	printf("\n");
	for(i=0; i<R; i++)
	{
		for(j=0; j<C; j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int a[10][10], b[10][10], c[10][10];
	int R,C;

	void Read_matrix (int a[10][10],int,int);
	void Write_matrix (int c[10][10],int,int);
	void Multiply_matrix(int a[10][10],int b[10][10],int c[10][10],int,int);

	printf("Enter the No. of Rows in Matrix : ");
	scanf("%d",&R);
	printf("Enter the No. of Coloumns in Matrix : ");
	scanf("%d",&C);

	Read_matrix(a,R,C);
	Read_matrix(b,R,C);
	Multiply_matrix(a,b,c,R,C);
	Write_matrix(c,R,C);

	return 0;
}