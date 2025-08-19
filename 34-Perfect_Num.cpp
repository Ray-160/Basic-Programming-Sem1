//Finds If Number Is Perfect

#include <iostream>

int main(){
    int num;
    int sum=0;
    int i=1;
    
    
    std::cout << "Enter Number: ";
    std::cin >> num;
    
    while (i < num)
    {
     if (num%i==0)
     {
      sum += i;
      i++;
     }
     
     else
     {
      i++;
     }
        
    }
    
    if (sum==num)
    { 
     std::cout << "Is A Perfect Number" << std::endl;
    }
    
    else
    {
     std::cout << "Is Not A Perfect Number" << std::endl;
    }
    
    return 0;
    
}
