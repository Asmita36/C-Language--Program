/*
Accept 3 numbers and return the multiplicatioon.
*/

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Multiplication
//  Input : Interger
//  Output : Integer
//  Description :   It is used to return Multiplication of three numbers
//  Autor : Ashmita Santosh Totre
//  Date :  4th August 2020
//
//////////////////////////////////////////////////////////////

int Multiplication(int iNo1, int iNo2, int iNo3)
{
    int iMult = 0;
    
    if((iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))
    {
        return 0;
    }
    
    if(iNo1 == 0)
    {
        iNo1 =1;
    }
    if(iNo2 == 0)
    {
        iNo2 = 1;
    }
    if(iNo3 == 0)
    {
        iNo3 = 1;
    }
    
    iMult = iNo1 * iNo2 * iNo3;
    
    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 =0;
    int iRet = 0;
    
    printf("Enter first number : \n");
    scanf("%d",&iValue1);
    
    printf("Enter Second number : \n");
    scanf("%d",&iValue2);
    
    printf("Enter third number : \n");
    scanf("%d",&iValue3);
    
    iRet = Multiplication(iValue1, iValue2, iValue3);
    
    printf("Multiplication is : %d\n",iRet);
    
    return 0;   
}










