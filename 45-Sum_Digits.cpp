//Finds Sum Of Digits Of A Number

#include <iostream>

int main(){
	int num,dig;
	int sum=0;
	
	std::cout << "Enter A Number: ";
	std::cin >> num;
	
   while (num!=0)
   {
    dig= num%10;
    sum= sum+dig;
    num= num/10;
   }
	
	std::cout << "The Sum Is: " << sum << std::endl;
	
	return 0;
	
}
