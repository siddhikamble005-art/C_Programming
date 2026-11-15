typedef int BOOL;

# define TRUE 1
# define FALSE 0

BOOL ChkVowel ( char cValue )
{
    // Check if the character matches any lowercase or uppercase vowel
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' ||
       cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
 
int main()
{
    char cVal = '\0';
    BOOL cRet = FALSE;

  

    printf("Enter the letter : ");
    scanf("%c",&cVal);

      cRet = ChkVowel(cVal);

    if(cRet == TRUE)
    {
        printf("%c is vowel ",cVal);
    }
    else
    {
        printf("%c is not vowel",cVal);
    }
 return 0;
}
