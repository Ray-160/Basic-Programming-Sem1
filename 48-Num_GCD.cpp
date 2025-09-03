//Finds GCD Of Two Given Numbers

#include <iostream>

int main(){
    int n1,n2;
    int gcd;
    
    std::cout << "Enter Number 1: ";
    std::cin >> n1;
    
    std::cout << "Enter Number 2: ";
    std::cin >> n2;
    
    for (int i=1; i<=n1 && i<=n2; i++)
    {
    	if (n1%i==0 && n2%i==0)
    	{
    	 gcd=i;
    	}
    }
    
    std::cout << "GCD Is: " << gcd << std::endl;
    
    return 0;
}
