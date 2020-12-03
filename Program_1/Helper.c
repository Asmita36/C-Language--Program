#include "Header.h"             

//////////////////////////////////////////////////////////////
//
// Function name : ChkEvenOdd
// Parameters : Integer
// Return value : Integer
// Description : It is used to check number is even / odd
// Author : Ashmita Santosh Totre.
// Date : 20 July 2020
//
//////////////////////////////////////////////////////////////

// Function Defination
BOOLEAN ChkEvenOdd(int iNo)
{
    int iResult = 0;                                 
    iReult = iNo % 2;       
    if(iResult == 1)        
    {
        return FALSE;       
    }
    else
    {
        return TRUE;        
    }
}

