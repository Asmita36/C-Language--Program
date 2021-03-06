/*
 Problem statement :
 Write a program which accept number of rows and coluns from user and display below pattern:
 
Input :   (Row = 4 Columns = 4)
Output :
 
 *  *   *   *
 $  $   $   $
 *  *   *   *
 $  $   $   $

*/
#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input : Interger,Integer
//  Description :   It is used to display the pattern
//  Autor : Ashmita Santosh Totre
//  Date :  11 August 2020
//
//////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol) 
{
    int i = 0, j = 0;
    
    for(i = 1; i<= iRow; i++)           
    {
        for(j = 1; j<= iCol; j++)  
        {
            if((i % 2) == 0)    
            {
              printf("$\t");
            }
            else                    
            {
                printf("*\t");
            }
        }
         printf("\n");
    }
}

int main()
 {
     int iValue1 = 0, iValue2 = 0;
     
     printf("Enter first number\n");
     scanf("%d",&iValue1);
     
     printf("Enter second number\n");
     scanf("%d",&iValue2);
     
     Pattern(iValue1, iValue2);
     
     return 0;
 }









