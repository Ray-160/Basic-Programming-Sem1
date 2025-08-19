//Finds Root Using Quadratic Equation

#include <iostream>
#include <cmath>

int main(){
    int a,b,c;
    int root1, root2;
    int delta;
    
    std::cout << "\nQuadratic Equation:" << std::endl;
    std::cout << "ax² + bx + c = 0 \n" << std::endl;
    
    std::cout << "\nQuadratic Formula:" << std::endl;
    std::cout << "x = (-b ± √(b² - 4ac)) / 2a \n" << std::endl;
    
    std::cout << "Enter a: ";
    std::cin >> a;
    
    std::cout << "Enter b: ";
    std::cin >> b;
    
    std::cout << "Enter c: ";
    std::cin >> c;
    
    delta= (b*b-4*a*c);
    
    root1= (-b+sqrt(delta))/2*a;
    root2= (-b-sqrt(delta))/2*a;
    
    std::cout << "The Roots Are " << root1 << ", " << root2 << std::endl;
    
    return 0;
    
}
