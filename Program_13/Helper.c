#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : ChkPallindrome
//  Input : Interger
//  Output :    Integer
//  Description :   It is used to check number is pallindrome or not
//  Autor : Ashmita Santosh Totre
//  Date :  3rd August 2020
//
//////////////////////////////////////////////////////////////

Bool ChkPlaiindrome(int iNo)                
{
    int iRev = 0;                           
    int iDigit = 0; 
    int Temp=iNo;                         
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev=(iRev*10)+iDigit;
        iNo = iNo / 10;
    }
    if(iRev==Temp)
    {
         return TRUE;
    }
    else
    {
          return FALSE;
    }
}









