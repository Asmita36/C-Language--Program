#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : DisplayFactor
//  Input : Interger
//  Output :    None
//  Description :   It is used to display the factors
//  Autor : Ashmita Santosh totre
//  Date :  28th July 2020
//
//////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)         
{
    int iCnt = 0;            
    
    for( iCnt = 1 ; iCnt <= iNo/2 ; iCnt++ )
    {
       if((iNo % iCnt) == 0)        
       {
               printf("%d\n",iCnt);
       }
    }
}














