/*
 Problem statement :
 Accept N numbers from user and perform the addition of that N numbers.
 
 Input :
 Value of N : 5
 Numbers are :  5   3   7   1   2
 Output : 18

 Input :
 Value of N : 4
 Numbers are :  5   -3   7   1
 Output : 10
 
 Input :
 Value of N : 9
 Numbers are :  5   -3   7   1   0    5     0   -8    1
 Output : 8
 
 */


#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//
//  Function name : SumNNumbers
//  Input : Interger,Integer
//  Output : Interger
//  Description :   It is used to perform the addition of that N numbers
//  Autor : Ashmita Santosh Totre
//  Date :  17 August 2020
//
//////////////////////////////////////////////////////////////


int SumNNumbers(int arr[], int iSize)
{
    int iSum = 0;
    int iCnt = 0;
    
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        iSum = iSum + arr[iCnt];
    }
    
    return iSum;
}

int main()
{
    int iValue = 0;
    int iCnt = 0;
    int iRet = 0;
    
    int *ptr = NULL;
    
    printf("Enter the value of N : ");
    scanf("%d",&iValue);
    
    ptr = (int *)malloc(4 * iValue);
    
    printf("Enter the values of array\n");
    
    for(iCnt = 0; iCnt<iValue; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Your entered elements are\n");
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }
    
    iRet = SumNNumbers(ptr,iValue); 
    
    printf("\nAddition of all numbers is : %d\n",iRet);
    
    return 0;
}
























