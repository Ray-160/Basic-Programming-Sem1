//Prints Prime Numbers From 1 to N

#include <iostream>

int main(){
    int num;
    int c=0;
    
    
    std::cout << "Enter A Number: ";
    std::cin >> num;
    
    for (int i=1; i<=num; i++)
    {
    	for (int j=2; j<i; j++)
    	{
    	 	if (i%j==0)
    	 	{
    	 	 c++;
    	 	 break;
    	 	}
    	 }
    	 
    	 if (c==0 and i!=1)
    	 {
    	  std::cout << i << std::endl;
    	 }
    	 
    	 c=0;
    }
    
    return 0;
} 		 
