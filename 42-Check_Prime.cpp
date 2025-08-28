//Checks If Number Is Prime

#include <iostream>

int main(){
    int num;
    int c=0;
    
    std::cout << "Enter A Number: ";
    std::cin >> num;
    
    if (num<= 1 || num>2 && num%2==0)
    {
     std::cout << "Is Not Prime" << std::endl;
    }
    

    else
    {
    	
    	if (num==2)
    	{
         std::cout << "Is Prime" << std::endl;
         return 0;
        } 
    
    	else 
        {
        	for (int i=3; i*i<=num; i+=2)
       		{
            	if (num%i==0)
            	{
               	 c++;
           	    }   
           	             
        	}

    		if (c>0)
    		{
     		 std::cout << "Is Not Prime" << std::endl;
    		}
    
    		else
    		{
     		 std::cout << "Is Prime" << std::endl;
    		}
         	
        }
   
     }
     
    return 0;
}
