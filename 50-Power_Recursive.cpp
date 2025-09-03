//Finds The Power Of A Number Via Recursive Method

#include <iostream>

int power(int base, int pow) {
    if (pow==0) return 1; 
    
    return base*power(base,pow-1); 
}

int main(){
    int base,pow,result;
 	
 	std::cout << "Enter Base: ";
 	std::cin >> base;
 	
 	std::cout << "Enter Power: ";
 	std::cin >> pow;
 	
 	result= power(base,pow);
 	
 	std::cout << "The Result Of " << base << "^" << pow << " Is " << result << std::endl;
 	
 	return 0;
}
