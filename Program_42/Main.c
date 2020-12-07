/*
 Problem statement :
 Accept N numbers from user and return the largest (Maximum) number.
 
 Input :
 Value of N : 5
 Numbers are :  5   3   7   1   2
 Output : 7

 Input :
 Value of N : 4
 Numbers are :  5   -3   7   11
 Output : 11
*/

#include<stdio.h>   
#include<stdlib.h>  

//////////////////////////////////////////////////////////////
//
//  Function name :Maximum
//  Input : Interger,Integer
//  Output : Interger
//  Description :   It is used  return the largest (Maximum) numbers
//  Autor : Ashmita Santosh Totre
//  Date :  17 August 2020
//
//////////////////////////////////////////////////////////////

int Maximum(int arr [], int iSize) 
{
    int iCnt =0;
    int iMax = 0;
    
    if(arr == NULL)         
    {
        printf("Invalid address");
        return 0;       
    }
    if(iSize <= 0)          
    {
        printf("Invalid size\n");
        return 0;         
    }
    
    iMax = arr[0];      
    
    for(iCnt = 1; iCnt < iSize; iCnt++)    
    {
        if(arr[iCnt] > iMax)    
        {
            iMax = arr[iCnt];   
        }
    }
    
    return iMax;                      
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
    
    iRet = Maximum(ptr,iValue);       
    
    printf("Maximum number is : %d\n",iRet);
    
    free(ptr);                      
    
    return 0;               
}
