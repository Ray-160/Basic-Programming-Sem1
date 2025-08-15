//Find Average Of Three

#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    int avg;
    
    printf("Enter First Number: ");
    scanf("%d",&a);
    
    printf("Enter Second Number: ");
    scanf("%d",&b);
    
    printf("Enter Third Number: ");
    scanf("%d",&c);
    
    avg=(a+b+c)/3;
    
    printf("The Average Is %d",avg);
    
    return 0;
  
}
