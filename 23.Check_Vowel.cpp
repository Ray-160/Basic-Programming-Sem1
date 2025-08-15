// Checks Whether Given Character Is A Vowel Or Not

#include <iostream>

int main(){
    char c;
    
    std::cout << "Enter Character: ";
    std::cin >> c;
    
    if ( c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U') 
    {
     std::cout << "Is A Vowel" << std::endl;
    }
    
    else
    {
     std::cout << "Is A Consonant" << std::endl;
    }
    
    return 0;
    
}
