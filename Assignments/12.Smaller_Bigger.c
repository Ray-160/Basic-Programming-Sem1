//Smaller Of Two Numbers

#include <stdio.h>

int main(){
    int a;
    int b;
    
    printf("Enter First Number: ");
    scanf("%d",&a);
    
    printf("Enter Second Number: ");
    scanf("%d",&b);
    
    if (a>b)
    {
     printf("First Number Is Larger");
    }
    
    else if (a<b)
    {
     printf("Second Number Is Larger");
    }
    
    else
    {
     printf("The Numbers Are Equal");
    }
    
    return 0;
   
}
