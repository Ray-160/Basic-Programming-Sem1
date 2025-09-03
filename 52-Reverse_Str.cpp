//Reverses A String

#include <iostream>

int main(){
    std::string str,rev;
    
    std::cout << "Enter A String: ";
    std::cin >> str;
    
    for (int i= str.size()-1; i>=0; i--)
    {
     rev= rev+str[i];
    }
    
    std::cout << "The Result Is: " << rev << std::endl;
    
    return 0;
    
}
