//Reverses A Number

#include <iostream>

int main(){
    int num;
    int rev=0;
    
    std::cout << "Enter Number: ";
    std::cin >> num;
        
    while (num>0)
    {
     rev=(rev*10)+(num%10);
     num=num/10;                   
    } 
    
    std::cout << "The Reverse Is " << rev << std::endl;
    
    return 0;
    
}   
