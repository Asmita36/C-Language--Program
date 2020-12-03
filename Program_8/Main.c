/*
Problem statement :
 Accept number from user and check whether that number is perfect or not.
Input : 12         Output :   Not a perfect number
Input : 6          Output :   Perfect number   (1+2+3)
Input : 28         Output :   Perfect number    (1+2+4+7+14)
 */

#include "Header.h"

int main()          
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    bRet = CheckPerfect(iValue); 
    
    if(bRet == TRUE)
    {
        printf("It is Perfect number\n");
    }
    else
    {
        printf("It is not a perfect number\n");
    }
    return 0;
}















