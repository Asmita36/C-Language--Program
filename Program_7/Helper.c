#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : SumOfFactor
//  Input : Interger
//  Output :    Integer
//  Description :   It is used to perform the addition the factors
//  Autor : Asmita Totre
//  Date :  29th July 2020
//
//////////////////////////////////////////////////////////////

int SumOfFactor(int iNo)
{
    int iSum = 1;       
    int iCnt = 0;         
    
    // Filter
    if(iNo == 0)       
    {
        return 0;
    }
    
    // Input updator
    if(iNo < 0)             
    {
        iNo = -iNo;         
    }
    
    for(iCnt = 2; iCnt <= iNo/2 ; iCnt++)
    {
            
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
    }
    
    return iSum;
}
















