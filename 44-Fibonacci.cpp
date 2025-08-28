//Prints Fibonacci Sequence#include <iostream>

#include <iostream>

int main(){
    int num;
    int a=1,b=2,c=0;
    
    
    std::cout << "Enter A Number: ";
    std::cin >> num;
    
    std::cout << "Fibonacci Sequence: ";
    
    for (int i=1; i<num; i++)
    {
    	if (i==1)
        {
         std::cout << a << ", ";
         continue;
        }
      
        if (i==2)
        {
         std::cout << b << ", ";
         continue;
        }
        
        c= a+b;
        a= b;
        b= c;
        
        std::cout << c << ", ";
        
     }	
     
     std::cout << std::endl;
     
     return 0;
     
}
