#include"Header.h"

////////////////////////////////////////////////////////////////////
//
//  Function Name :Division
//  Input : Integrer, Interger, Address of double
//  Output : Boolean
//  Description:It is used to perform division
//  Date : 27 July 2020
//  Author name :Ashmita Santosh Totre
//
///////////////////////////////////////////////////////////////////

BOOLEAN Division(int iValue1,int iValue2,double *pData)   
{
    double dRet = 0.0;                      

    if(iValue2 == 0)                            
    {
        return FALSE;           
    }
    
    dRet = (double)iValue1 / (double)iValue2;   
    
    *pData = dRet;    
    
    return TRUE;                        
}


