//Prints Characters Of String In Reverse

#include <iostream>

int main(){
    std::string str, rev;
   
    std::cout << "Enter A String: ";
    std::cin >> str;

    std::cout << "The Reverse Characters Are: " << std::endl;
    
    for (int i= str.size()-1; i>=0; i--)
    {
     std::cout << str[i] << std::endl;
    }
    
    return 0;
    
}
