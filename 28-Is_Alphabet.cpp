//Checks If Given Input Is An Alphabet

#include <iostream>

int main(){
    char ch;
    
    std::cout << "Enter Any Character: ";
    std::cin >> ch;
    
    if (isalpha(ch))
    {
     std::cout << "Is An Alphabet" << std::endl;
    }
    
    else
    {
     std::cout << "Is Not Alphabet" << std::endl;
    }
    
    return 0;
    
}
