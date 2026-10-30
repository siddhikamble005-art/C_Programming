
#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iValue)
{
    if(iValue % 5 == 0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
}

int main()
{
    int iNo = 0;

    printf("Enter Number : ");
    scanf("%d",&iNo);

    CheckDivisibility(iNo);

    return 0;
}
