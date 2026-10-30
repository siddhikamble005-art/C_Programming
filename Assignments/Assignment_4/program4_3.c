
#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is Greater",iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("%d is Greater",iSecond);
    }
    else
    {
        printf("Both Numbers Are Equal");
    }
}

int main()
{
    int iNo1 = 0, iNo2 = 0;

    printf("Enter First Number : ");
    scanf("%d",&iNo1);

    printf("Enter Second Number : ");
    scanf("%d",&iNo2);

    FindGreater(iNo1,iNo2);

    return 0;
}
