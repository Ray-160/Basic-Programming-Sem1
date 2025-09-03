//Prints Sum Of All Even Numbers From 1 to N

#include <iostream>

int main(){
    int n;
    int sum=0;
    
    std::cout << "Enter N: ";
    std::cin >> n;
    
    for (int i=1; i<n; i++)
    {
     	if (i%2==0)
     	{
     	 sum=sum+i;
     	}
  
    }
    
    std::cout << "The Sum Is: " << sum << std::endl;
    
    return 0;
    
}
