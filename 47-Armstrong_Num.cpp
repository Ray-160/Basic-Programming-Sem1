//Finds If Number Is Armstrong Number

#include <iostream>
#include <cmath>

int main(){
	int num;
	int dig,dig_cube;
	int sum=0;
	
	std::cout << "Enter A Number: ";
	std::cin >> num;
	int temp=num;
	
    while (temp!=0)
    {
     dig= (temp%10);
     dig_cube= pow(dig, 3);
     sum= sum+dig_cube;                             
     temp= temp/10;
    }
   
    if (sum==num)
    {
     std::cout << "Is An Armstrong Number" << std::endl;
    }
     
    else if (sum!=num)
    {
     std::cout << "Is Not An Armstrong Number" << std::endl;
    }
   
   return 0;
	
}
