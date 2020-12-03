/*
Problem statement :
Accept number from user and return the number of even digits from that number.

 Input : 1278   Output : 2
 Input : 127    Output : 1
 Input : 27   Output : 1
 Input : 2   Output : 1
 Input : -56    Output : 1
 Input : 0      Output : 1
 Input : 1005   Output : 2
 */

#include "Header.h"

// Entry point function
int main()
{
    int iValue = 0;             
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = CountEvenDigits(iValue);
    
    printf("Number of even digits are : %d\n",iRet);
    
    return 0;       
}














/*
Input : 1547

1547 / 10   ->      154         1
154 / 10    ->       15           2
15 / 10      ->        1            3
1 / 10          ->      0            4
*/
