//Find Area Of Circle

#include <stdio.h>

int main(){
    int r;
    int area;
    
    printf("Enter Radius: ");
    scanf("%d",&r);
    
    area=3.14*r*r;
    
    printf("The Area Is %d", area);
    printf("cm^2");
    
    return 0;
}
