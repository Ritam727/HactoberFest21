#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int total_num; 
    printf("Total number of terms = ");
    scanf("%i", &total_num);

    int num[100];
    for (int i = 0; i < total_num; i++)
    {
        printf("num_%i = ", i + 1);
        scanf("%i", &num[i]);
    }

    for (int i = 0; i < total_num - 1; i++)
    {
        for (int j = 0; j < total_num - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                swap(&num[j], &num[j + 1]);
            }
        }
    }

    printf("Numbers in ascending order are as \n");
    for (int i = 0; i < total_num; i++)
    {
        printf("%i ", num[i]);
    }
    printf("\n");
    return 0;
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
