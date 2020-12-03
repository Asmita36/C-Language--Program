#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : RevNum
//  Input : Interger
//  Output :    Integer
//  Description :   It is used to reverse the number
//  Autor : Ashmita Santosh Totre
//  Date :  3rd August 2020
//
//////////////////////////////////////////////////////////////

int RevNum(int iNo)                
{
    int iRev = 0;                           
    int iDigit = 0;                          
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev=(iRev*10)+iDigit;
        iNo = iNo / 10;
    }
    
    return iRev;
}









