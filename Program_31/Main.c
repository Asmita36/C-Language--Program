/*
 Problem statement :
 Write a program which accept number from user and display below pattern will display :
 
 Input :    4
 Output :   -4   -3  -2  -1  0   1   2   3   4
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
    
    for(iCnt = -iNo; iCnt <= 0; iCnt++ )
    {
        printf("%d",iCnt);
    }
    
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("%d ",iCnt);
    }
}

//////////////////////////////////////////////////////////////
//
//  Function name : PatternX
//  Input : Interger 
//  Description :   It is used to display the pattern
//  Autor : Ashmita Santosh Totre
//  Date :  10 August 2020
//
//////////////////////////////////////////////////////////////

void PatternX(int iNo)
{
    int iCnt = 0;
  
    if(iNo < 0)         
    {
        iNo = -iNo;
    }

   
    for(iCnt = -iNo; iCnt <= iNo; iCnt++ )
    {
        printf("%d",iCnt);
    }
}



int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    PatternX(iValue);
    
    return 0;
}

