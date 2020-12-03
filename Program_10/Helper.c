#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : CountDigits
//  Input : Interger
//  Output :    Integer
//  Description :   It is used to count number of digits
//  Autor : Piyush Manohar Khairnar
//  Date :  3rd August 2020
//
//////////////////////////////////////////////////////////////

int CountDigits(int iNo)                
{
    int iCnt = 0;                        
    
    while(iNo != 0)
    {
        iNo = iNo / 10;
        iCnt++;
    }
    
    return iCnt;
}









