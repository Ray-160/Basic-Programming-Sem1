// To find sign of number

#include <stdio.h>

int main(){
    int n;
    
    printf("Enter Number: ");
    scanf("%d",&n);
    
    if (n>0)
    {
     printf("Number Is Positive");
    }
    
    else if (n==0)
    {
     printf("Number Is Zero");
    }
    
    else if (n<0)
    {
     printf("Number Is Negative");
    }
    
    return 0;
   
}
