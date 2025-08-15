//Checks If Given Number Is Divisible By 5 And 15

#include <iostream>

int main(){
    int n;
    
    std::cout << "Enter Number: ";
    std::cin >> n;
    
    if (n%5==0 && n%11==0)
    {
     std::cout << "It Is Divisible" << std::endl;
    }
    
    else
    {
     std::cout << "It Is Not Divisible" << std::endl;
    }
    
    return 0;
    
 }
     
