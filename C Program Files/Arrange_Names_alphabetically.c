#include<stdio.h>
#include<string.h>
int main()
{
	char a[5][30];
	char b[30];
 	int i,j;

	printf("Enter 5 Names  : ");
	printf("\n");

	for(i=0; i<=4; i++)
	{
		gets(a[i]);
	}

    for (i = 0; i < 4 ; i++)

        {
            for (j = i + 1; j < 5; j++)
            {
                if (strcmp(a[i], a[j]) > 0) 
                {
                    strcpy(b, a[i]);
                    strcpy(a[i], a[j]);
                    strcpy(a[j], b);
                }
            }
        }

	

   
   printf("\nNames in alphabetical order :\n");
   for(i=0;i<5;i++)
   {

      puts(a[i]);
   }
	
	return 0;
}
