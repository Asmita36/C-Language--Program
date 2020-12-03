/*
    Problem statement : Accept two numebrs from user and return its division.
*/
 
#include "Header.h"
    
int main()                     
{
    int iNo1 = 0, iNo2 = 0;
    double dAns = 0.0;
    
    printf("Enter first number\n");
    scanf("%d",&iNo1);
    
    printf("Enter second number\n");
    scanf("%d",&iNo2);
    
    dAns = Division(iNo1, iNo2);
    
    printf("Division of two numbers is %lf\n",dAns);
    
    return 0;
}



