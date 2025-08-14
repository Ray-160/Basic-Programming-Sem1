//Calculate Power Using Loop

#include <stdio.h>

int main(){
    int base;
    int exponent;
    int result=1;
    int i=1;
    
    printf("Enter Number: ");
    scanf("%d",&base);
    
    printf("Enter Exponent: ");
    scanf("%d",&exponent);
    
    while (i<=exponent)
    {
     result=result*base;
     i++;
    }
    
    printf("Answer Is: %d",result);
    
    return 0;
    
}
    
