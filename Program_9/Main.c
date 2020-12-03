/*
Problem statement :
 Accept number from user and check whether that number is perfect or not.
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















