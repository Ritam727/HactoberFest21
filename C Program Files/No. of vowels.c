#include <stdio.h>
int main()
{
    FILE *ptr = fopen("4thquestion.txt", "r");
    int vowels = 0, consonants = 0;
    char ch;
    while ((ch = fgetc(ptr)) != EOF)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowels++;
        else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
            consonants++;
    }
    printf("The number of vowels are : %d.", vowels);
    printf("\n");
    printf("The number of consonants are : %d.", consonants);
 
    return 0;
}