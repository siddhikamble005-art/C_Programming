
#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("Positive Number");
    }
    else if(iValue < 0)
    {
        printf("Negative Number");
    }
    else
    {
        printf("Zero");
    }
}

int main()
{
    int iNo = 0;

    printf("Enter Number : ");
    scanf("%d",&iNo);

    CheckNumber(iNo);

    return 0;
}
