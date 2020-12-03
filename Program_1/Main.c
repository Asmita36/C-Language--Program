/*
    Problem statement : Accept number from user and check whether the
    number is even or odd.
*/

#include "Header.h"     


int main()
{
    int iValue = 0;                             
    BOOLEAN iAnswer = FALSE;                   
    
    printf("Enter number\n");       
    scanf("%d",&iValue);              
    
    iAnswer = ChkEvenOdd(iValue);  
    if(iAnswer == TRUE)                     
    {
        printf("Number is even\n");
    }
    else                                              
    {
        printf("Number is odd\n");
    }
    
    return 0;                              
}




