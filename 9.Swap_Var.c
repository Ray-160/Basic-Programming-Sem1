//Swapping Variables

#include <stdio.h>

int main(){
    int a;
    int b;
    int temp;
    
    printf("Enter First Variable: ");
    scanf("%d",&a);
    
    printf("Enter Second Variable: ");
    scanf("%d",&b);
    
    printf("Before Swapping: a=%d, b=%d",a,b);
    
    temp=a;
    a=b;
    b=temp;
  
    printf("\nAfter Swapping: a=%d, b=%d",a,b);
    
    return 0;
    
}
