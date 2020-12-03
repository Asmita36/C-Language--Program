#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : SumOfFactor
//  Input : Interger
//  Output :    Integer
//  Description :   It is used to check number is perfect or not
//  Autor : Ashmita Totre.
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



//////////////////////////////////////////////////////////////
//
//  Function name : CheckPerfect
//  Input : Interger
//  Output :    Boolean
//  Description :   It is used to whether number is perfect or not
//  Autor : Ashmita Totre
//  Date :  30th July 2020
//
//////////////////////////////////////////////////////////////


BOOL CheckPerfect(int iNo)
{
    int iRet = 0;
    
    if(iNo < 0)             
    {
        iNo = -iNo;
    }
    
    if((iNo == 1) || (iNo == 0))        
    {
        return FALSE;
    }
    
    iRet = SumOfFactor(iNo);
    
    if(iRet == iNo)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}










