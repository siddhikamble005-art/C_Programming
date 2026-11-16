#include<stdio.h>

void CheckMultipleDivisibility(int iValue)
{
    if(iValue % 3 == 0 && iValue % 5 == 0)
    {
        printf("Divisible by 3 and 5 both");
    }
    else if(iValue % 3 == 0)
    {
        printf("Divisible by 3");
    }
    else if(iValue % 5 == 0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by both");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);
 
    CheckMultipleDivisibility(iValue);

    return 0;

}
