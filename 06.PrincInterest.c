// Calculate Principal Interest

#include <stdio.h>

int main(){
    int interest;
    int principal;
    int rate;
    int time;
    
    printf("Enter Principal: ");
    scanf("%d",&principal);
    
    printf("Enter Rate: ");
    scanf("%d",&rate);
    
    printf("Enter Time: ");
    scanf("%d",&time);
    
    interest= (principal*rate*time)/100;
    
    printf("The Principal Interest is %d", interest);
    
    return 0;
    
}
    
    
    
    
    

