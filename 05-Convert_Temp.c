//Converts Celsius to Farenheit

#include <stdio.h>

int main(){
    int celsius;
    int farenheit;
    
    printf("Enter Temp In Celsius: ");
    scanf("%d",&celsius);
    
    farenheit= (celsius*9/5)+32;
    
    printf("Temp in Farenheit is %d\t", farenheit);
    printf("F");
    
    return 0;
    
}
