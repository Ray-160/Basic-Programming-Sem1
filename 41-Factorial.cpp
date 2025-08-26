//Prints Factorial

#include <iostream>

int main(){
    int num;
    long factorial=1;
    int i=1;
    
    
    std::cout << "Enter A Positive Number: ";
    std::cin >> num;
    
    while (i <= num)
    {   
     factorial*= i;
     i++;
    }
     
    std::cout << "Factorial Is: " << factorial << std::endl;
      
    return 0;
}
    
