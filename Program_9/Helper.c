#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : CheckPerfect
//  Input : Interger
//  Output :    Boolean
//  Description :   It is used to whether number is perfect or not
//  Autor :Ashmita Totre
//  Date :  30th July 2020
//
//////////////////////////////////////////////////////////////



BOOL CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 1;
    
    if(iNo < 0)             
    {
        iNo = -iNo;
    }
    
    if((iNo == 1) || (iNo == 0))       
    {
        return FALSE;
    }
    
    for(iCnt = 2; iCnt <= iNo/2 ; iCnt++)
    {
            
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;             
            }
        
            if(iSum > iNo)
            {
                break;
            }
    }
    
    if(iSum == iNo)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}








