/*
Problem statement :
Accept number from user and check whether number is pallindrome or not. (Logic without using any helper function - Using one function)
*/

typedef int BOOL;

#define TRUE 1
#define FALSE 0

#include<stdio.h>

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

BOOL CheckPallindrome(int iNo)     
{
    int iDigit = 0;                             
    inti Rev = 0;                              
    int iBackup = iNo;                      
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10)+iDigit;
        iNo = iNo / 10;
    }
        
    if(iBackup == iRev)         
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
    
    bRet = CheckPallindrome(iValue);
    
    if(bRet == TRUE)
    {
        printf("Number is pallindrome\n");
    }
    else
    {
        printf("Number is not pallindrome\n");
    }
    
    return 0;       
}












