//Prints Multiplication Table

#include <iostream>

int main(){
    int i=1;
    int n;
    int p;
    
    std::cout << "Enter Number: ";
    std::cin >> n;
    
    while (i<=10)
    { 
     p=i*n;
     std::cout << n << " * " << i << " = " << p << "\n";
     i++;
    }
    
    return 0;
    
}
