#include <stdio.h>

void tower_of_hanoi(int, char, char, char);

int main()
{
    int num;

    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of movesfor the Tower of Hanoi are :\n");
    tower_of_hanoi(num, 'A', 'C', 'B');
    return 0;
}
void tower_of_hanoi(int num, char fromblock, char toblock, char auxblock)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from block %c to block %c", fromblock, toblock);
        return;
    }
    tower_of_hanoi(num - 1, fromblock, auxblock, toblock);
    printf("\n Move disk %d from block %c to block %c", num, fromblock, toblock);
    tower_of_hanoi(num - 1, auxblock, toblock, fromblock);
}
