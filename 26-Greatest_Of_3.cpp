//Finds Greatest Of Three Inputed Numbers

#include <iostream>

int main(){
    int a;
    int b;
    int c;
    
    std::cout << "Enter First Number: ";
    std::cin >> a;
    
    std::cout << "Enter Second Number: ";
    std::cin >> b;
    
    std::cout << "Enter Third Number: ";
    std::cin >> c;
    
    if (a>=b && a>=c)
    {
     std::cout << a << " Is The Greatest Number" << std::endl;
    }
    
    else if (b>=a && b>=c)
    {
     std::cout << b << " Is The Greatest Number" << std::endl;
    }
    
    else 
    {
     std::cout << c << " Is The Greatest Number" << std::endl;
    }
    
    return 0;
    
}
