/*
    Problem statement : Accept two numebrs from user and return its addition.
*/
 

#include "Header.h"
    
int main()                      
{
    int iNo1 = 0;              
    int iNo2 = 0;
    int iRet = 0;
    
    printf("Enter first number\n");
    scanf("%d",&iNo1);
    
    printf("Enter second number\n");
    scanf("%d",&iNo2);
    
    iRet = Addition(iNo1,iNo2);
    
    printf("Addition is : %d \n",iRet);
    
    return 0;
}
