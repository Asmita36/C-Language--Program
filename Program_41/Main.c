/*
 Problem statement :
 Accept N numbers from user and return the frequency of even numbers.
 
 Input :
 Value of N : 5
 Numbers are :  5   3   7   1   2
 Output : 1

 Input :
 Value of N : 4
 Numbers are :  5   -3   7   1
 Output : 0
 
 Input :
 Value of N : 9
 Numbers are :  5   -4   7   8   0    5     0   -8    1
 Output : 5
 
 */

#include<stdio.h>   
#include<stdlib.h>  

#define ERRMEMORY -1
#define ERRSIZE -2

//////////////////////////////////////////////////////////////
//
//  Function name :CountEven
//  Input : Interger,Integer
//  Output : Interger
//  Description :   It is used  return the frequency of even numbers
//  Autor : Ashmita Santosh Totre
//  Date :  17 August 2020
//
//////////////////////////////////////////////////////////////


int CountEven(int arr [], int iSize) 
{
    int iCnt =0;
    int iEven = 0;
    
    if(arr == NULL)         
    {
        return ERRMEMORY;      
    }
    if(iSize <= 0)          
    {
        return ERRSIZE;         
    }
    
    for(iCnt = 0; iCnt < iSize; iCnt++)     
    {
            if((arr[iCnt] % 2) == 0)        
            {
                iEven++;                            
            }
    }
    
    return iEven;                                 
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    int iCnt = 0;
    int *ptr = NULL;
    
    printf("Enter the value of N\n");
    scanf("%d",&iValue);                
    
    if(iValue == 0)
    {
        printf("Error : Inavlid Input\n");
        return -1;
    }
    
    ptr = (int *)malloc(sizeof(int) * iValue);      

    if(ptr == NULL)     
    {
        printf("Error : Unable to allocate memory\n");
        return -1;      
    }
    
    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);     
    }
    
    iRet = CountEven(ptr,iValue);       
    if(iRet == ERRSIZE)                    
    {
        printf("Error : Invalid size\n");
    }
    else if (iRet == ERRMEMORY)     
    {
        printf("Error : Invalid memory address\n");
    }
    else                                           
    {
        printf("Number of even numbers are : %d\n",iRet);
    }
    
    free(ptr);                      
    
    return 0;               
}
