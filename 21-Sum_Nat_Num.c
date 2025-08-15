//Print Sum of N numbers
#include <stdio.h>

int main(){
    int n;
    int sum=0;
    int i=1;
    
    printf("Enter Number N: ");
    scanf("%d",&n);
 
    while (i<=n)
    {
     sum+=n;
     i++;
    }
    
    printf("The Sum Of First %d Numbers is %d", n, sum);
    
}
