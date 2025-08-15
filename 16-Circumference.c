//Find Circumference

#include <stdio.h>

int main(){
    int r;
    int Circumference;
    
    printf("Enter Radius: ");
    scanf("%d",&r);
    
    Circumference=2*3.14*r;
    
    printf("The Circumference Is %d", Circumference);
    printf("cm^2");
    
    return 0;
}
