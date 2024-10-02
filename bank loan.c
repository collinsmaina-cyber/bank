#include<stdio.h>

int main()
{
    int a;
    int income;
    
    printf("enter your age:");
    scanf("%d",&a);
    
    printf("Enter your annual income:");
    scanf("%d",&income);
    
    //check loan qualification
    if (a>=21 & income>=21000)
    
    printf("congratulation you qualify for a loan.\n");
    
    else
    
    printf("unfotunately we are unable to offer you a loan at this time.\n");
    
     
    return 0;
}