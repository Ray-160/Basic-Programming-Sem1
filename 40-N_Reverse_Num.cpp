//Prints Numbers From n to 1

#include <iostream>

int main(){
    int n;
    int i=1;
    
    std::cout << "Enter N: ";
    std::cin >> n;
    
    while (n>=i)
    {
     std::cout << n << std::endl;
     n--;
    }
    
    return 0;
    
}
