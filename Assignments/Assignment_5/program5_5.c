#include <stdio.h>
#include <stdlib.h>

void CheckCharacterType(char cValue)
{
    if (cValue >= 'A' && cValue <= 'Z')
    {
        printf("Uppercase Alphabet");
    }
    else if (cValue >= 'a' && cValue <= 'z')
    {
        printf("Lowercase Alphabet");
    }
    else if (cValue >= '0' && cValue <= '9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
}

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    CheckCharacterType(ch);

    return 0;
}
