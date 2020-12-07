/*
Problem statement :
Accept number from user and return the reverse number.
*/

 #include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : ReverseNumber
//  Input : Interger
//  Output :    Integer
//  Description :   It is used to reverse the number
//  Autor : Ashmita Santosh Totre
//  Date :  4th August 2020
//
//////////////////////////////////////////////////////////////

int ReverseNumber(int iNo)      
{
    int iDigit = 0;     
    int iRev = 0;       
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    
    return iRev;
}


int main()
{
    int iValue = 0;          
    int iRet = 0;              
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = ReverseNumber(iValue);   
    
    printf("Reverse Number is : %d\n",iRet);
    
    return 0;       
}
