#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if (iValue % 3 == 0 && iValue % 5 == 0)
    {
        printf("Divisible by Both");
    }
    else if (iValue % 3 == 0)
    {
        printf("Divisible by 3 Only");
    }
    else if (iValue % 5 == 0)
    {
        printf("Divisible by 5 Only");
    }
    else
    {
        printf("Not Divisible by Either");
    }
}

int main()
{
    int iNo;

    printf("Enter an integer: ");
    scanf("%d", &iNo);

    CheckMultipleDivisibility(iNo);

    return 0;
}
