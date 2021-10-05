#include <stdio.h>
#define N 3 // N = number of students

struct students
{
    char name[20];
    int marks[3], rank, roll;
    float percent;
} student[N];

void input();
void rankings();
void display();
void swap(struct students *a, struct students *b);

int main()
{
    printf("Enter Students Data \n\n");

    input();

    rankings();

    display();

    return 0;
}

void input()
{
    for (int i = 0; i < N; i++)
    {
        int total = 0;

        printf("Enter Name %d : ", i + 1);
        scanf("%s", student[i].name);

        printf("Roll Number = ");
        scanf("%d", &student[i].roll);

        for (int j = 0; j < 3; j++)
        {
            printf("Marks in subject %d = ", j + 1);
            scanf("%d", &student[i].marks[j]);

            total = total + student[i].marks[j];
        }
        student[i].percent = (float)total / 3;
        printf("\n");
    }
}

void rankings()
{
    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - 1; j++)
            if (student[j].percent < student[j + 1].percent)
                swap(&student[j], &student[j + 1]);
}

void swap(struct students *a, struct students *b)
{
    struct students tmp = *a;
    *a = *b;
    *b = tmp;
}

void display()
{
    printf("Rank\tName\tRoll\tPercentage \n");
    for (int i = 0; i < N; i++)
    {
        student[i].rank = i + 1;
        printf("%d\t%s\t%d\t%.2f%% \n", student[i].rank, student[i].name, student[i].roll, student[i].percent);
    }
}