/*
 Problem statement :
 Write a program which accept number from user and display below pattern:
 
 Input :    6
 Output :   *    #   *   #   *   #
*/

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input : Interger 
//  Description :   It is used to display the pattern
//  Autor : Ashmita Santosh Totre
//  Date :  10 August 2020
//
//////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
                if((iCnt % 2) == 0)    
                {
                    printf("#\t");
                }
                else                        
                {
                    printf("*\t");
                }
    }
    
}

int main()
{
    int iValue = 0;
    
    printf("Enter one number\n");
    scanf("%d",&iValue);
    
    Pattern(iValue);
    
    return 0;
}

