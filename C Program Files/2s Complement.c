#include <stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    printf("Enter the no. : ");
    scanf("%d", &n);
 
    int bin[32];
    int i = 0;
    while (n) //storing no in binary form but in reversed order
    {
        bin[i] = n % 2;
        n /= 2;
        i++; //keeping track of the size of the array
    }
 
    for (int j = i; j >= 0; j--) //taking the complement
    {
        if (bin[j])
            bin[j] = 0;
        else
            bin[j] = 1;
    }
    
    bool ans = false;           //if all are 1 then we might need to add one more bit
    for (int j = 0; j < i; j++) //adding 1 to it
    {
        if (bin[j] == 1)
            bin[j] = 0; //making all the 1's 0 as 1+1= 10 .
        else            //0 encountered
        {
            bin[j] = 1;
            ans = true;
            break;
        }
    }
    if (ans == false) //only executes when there's no 0 in the binary form
    {
        bin[i + 1] = 1;
        i++;
    }
 
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", bin[j]);
    }
    return 0;
}
