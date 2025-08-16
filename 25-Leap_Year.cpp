//Program To Check Whether Given Year Is A Leap Year Or Not

#include <iostream>

int main(){
    int year;
    
    std::cout << "Enter Year: ";
    std::cin >> year;
    
    if (year%400==0)
    {
     std::cout << "Is A Leap Year" << std::endl;
    }
    
    else if (year%4==0)
    { 
     std::cout << "Is A Leap Year" << std::endl;
    }
    
    else if (year%100==0)
    {
     std::cout << "Is Not A Leap Year" << std::endl;
    }
    
    else
    {
     std::cout << "Is Not A Leap Year" << std::endl;          
    }
    
    return 0;
    
}
