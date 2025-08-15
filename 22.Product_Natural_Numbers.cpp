//TO Find The Product Of N Natural Numbers

#include <iostream>

int main(){
    int n;
    long prod=1;
    int i=1;
    
    std::cout << "Enter  Number: ";
    std::cin >> n;
    
    if (n<=0)
    {
     std::cout << "Enter A Natural Number";
     return 1;
    }
    
    while (i<=n)
    { 
     prod*=i;
     i++;
    }
    
    std::cout << "The Product Of The First " << n << " Natural Numbers is " << prod << std::endl;
    
    return 0;
    
 }   
