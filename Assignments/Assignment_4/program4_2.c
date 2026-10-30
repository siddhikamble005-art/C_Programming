
#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iValue)
{
    if(iValue % 2 == 0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
}

int main()
{
    int iNo = 0;

    printf("Enter Number : ");
    scanf("%d",&iNo);

    CheckEvenOdd(iNo);

    return 0;
}
