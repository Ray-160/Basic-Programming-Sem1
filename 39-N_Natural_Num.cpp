//Print Numbers From 1 to N

#include <iostream>

int main(){
    int n;
    int i=1;
    
    std::cout << "Enter N: ";
    std::cin >> n;
    
    while (i<=n)
    {
     std::cout << i << std::endl;
     i++;
    }
    
    return 0;
    
}
