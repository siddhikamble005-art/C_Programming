#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 0;

    if(iNo1 == 0)
    {
        return iNo2 * iNo3;
    }

    if(iNo2 == 0)
    {
        return iNo1 * iNo3;
    }

    if(iNo3 == 0)
    {
        return iNo1 * iNo2;
    }

    iMult = iNo1 * iNo2 * iNo3;

    return iMult;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("%d\n",iRet);

    return 0;
}
