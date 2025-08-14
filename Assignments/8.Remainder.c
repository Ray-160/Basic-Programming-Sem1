//Checks Remainder

#include <stdio.h>

int main(){
    int n1;
    int n2;
    int remainder;
    
    printf("Enter Dividend: ");
    scanf("%d",&n1);
    
    printf("Enter Divisor: ");
    scanf("%d",&n2);
    
    remainder=n1%n2;
    
    printf("The Remainder is %d", remainder);
    
    return 0;
    
}
