//Checks Whether Triangle Is Possible Or Not By Inputting Angles

#include <iostream>

int main(){
    int a,b,c;
    int sum;
    
    std::cout << "Enter Angle 1: ";
    std::cin >> a;
    
    std::cout << "Enter Angle 2: ";
    std::cin >> b;   
    
    std::cout << "Enter Angle 3: ";
    std::cin >> c;
    
    if (a+b+c==180)
    {
     std::cout << "This Triangle Is Valid" << std::endl;
    }
    
    else
    {
     std::cout << "This Triangle Is Not Valid" << std::endl;
    }
    
    return 0;
    
 }
