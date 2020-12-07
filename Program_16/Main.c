/*
Problem statement :
Accept number from user and check whether number is pallindrome or not.
*/

#include<stdio.h>
typedef  int BOOL;

#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////
//
//  Function name : ReverseNumber
//  Input : Interger
//  Output :    Integer
//  Description :   It is used to reverse the number
//  Autor : Ashmita Santosh Totre
//  Date :  4th August 2020
//
//////////////////////////////////////////////////////////////

int ReverseNumber(int iNo)      
{
    int iDigit = 0;     
    int iRev = 0;       
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    
    return iRev;
}

//////////////////////////////////////////////////////////////
//
//  Function name : ChkPallindrome
//  Input : Interger
//  Output :    BOOLEAN
//  Description :   It is used to check the pallindrome number
//  Autor : Ashmita Santosh Totre
//  Date :  4th August 2020
//
//////////////////////////////////////////////////////////////

BOOL ChkPallindrome(int iNo)
{
    int iRet = 0;
    
    iRet = ReverseNumber(iNo);
    
    if(iRet == iNo)
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
    int iValue = 0;          
    BOOL bRet = FALSE;              
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    bRet = ChkPallindrome(iValue);   
    
    if(bRet == TRUE)
    {
        printf("It is pallindrome\n");
    }
    else
    {
        printf("It is not pallindrome\n");
    }
    
    return 0;   
}
