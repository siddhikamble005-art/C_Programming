#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if(iFirst >= iSecond && iFirst >= iThird)
    {
        printf("%d is Greatest",iFirst);
    }
    else if(iSecond >= iFirst && iSecond >= iThird)
    {
        printf("%d is Greatest",iSecond);
    }
    else
    {
        printf("%d is Greatest",iThird);
    }
}

int main()
{
    int iNo1 = 0, iNo2 = 0, iNo3 = 0;

    printf("Enter First Number : ");
    scanf("%d",&iNo1);

    printf("Enter Second Number : ");
    scanf("%d",&iNo2);

    printf("Enter Third Number : ");
    scanf("%d",&iNo3);

    FindGreatest(iNo1,iNo2,iNo3);

    return 0;
}
