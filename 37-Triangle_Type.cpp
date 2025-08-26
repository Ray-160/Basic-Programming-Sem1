//Finds Whether A Triangle Is Scalene, Equalateral, Isosceles

#include <iostream>

int main(){
    int side1,side2,side3;
      
    std::cout << "Enter Length Of Side 1: " << std::endl;
    std::cin >> side1;
    
    std::cout << "Enter Lenth Of Side 2: " << std::endl;   
    std::cin >> side2;

    std::cout << "Enter Length Of Side 3: " << std::endl;   
    std::cin >> side3;
    
    if (side1==side2 && side2==side3)
    {
     std::cout << "The Triangle Is Equalateral" << std::endl; 
    }
    
    else if (side1==side2 && side1!=side3 && side2!=side3)
    {
     std::cout << "The Triangle Is Isosceles" << std::endl; 
    }
    
    else
    {
     std::cout << "Triangle Is Scalene" << std::endl; 
    }
    
    return 0;
}    
