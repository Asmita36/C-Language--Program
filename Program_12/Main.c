/*
Problem statement :
Accept number from user and return its reverse number.
*/

#include "Header.h"


int main()
{
    int iValue = 0;             
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = RevNum(iValue);
    
    printf("Reverse number is : %d\n",iRet);
    
    return 0;       
}














/*
Input : 1547

1547 / 10   ->      154         1
154 / 10    ->       15           2
15 / 10      ->        1            3
1 / 10          ->      0            4
*/
