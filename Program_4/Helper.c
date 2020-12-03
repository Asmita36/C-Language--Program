#include"Header.h"

////////////////////////////////////////////////////////////////////
//
//  Function Name : Division
//  Input : Integrer, Interger
//  Output : Floating point number
//  Description: It is used to perform division
//  Date :27 July 2020
//  Author name :Ashmita Santosh Totre
//
///////////////////////////////////////////////////////////////////

double Division(int iValue1,int iValue2)         
{
    double dRet = 0.0;                      
    
    if(iValue2 == 0)                            
    {
        return 0.0;
    }
    
    dRet = (double)iValue1 / (double)iValue2;   
    
    return dRet;                        
}


