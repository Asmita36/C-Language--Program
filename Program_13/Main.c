/*
Problem statement :
Accept number from user and return its reverse number.
*/

#include "Header.h"


int main()
{
    int iValue = 0;             
    BOOL iRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = ChkPallindrome(iValue);
    if(iRet==TRUE)
    {
       printf("number is pallindrome");
    }
    else
    {
       printf("number is not pallindrome);
    }
    return 0;       
}














/*
Input : 1547

1547 / 10   ->      154         1
154 / 10    ->       15           2
15 / 10      ->        1            3
1 / 10          ->      0            4
*/
