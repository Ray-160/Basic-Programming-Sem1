//Calculate Power Of A Number

#include <math.h>
#include <stdio.h>

int main(){
    int base;
    int exponent;
    int result;
    
    printf("Enter Number: ");
    scanf("%d",&base);
    
    printf("Enter Exponent: ");
    scanf("%d",&exponent);
    
    result= pow(base,exponent);
    
    printf("%d^%d=%d",base,exponent,result);
    
    return 0;
    
}
