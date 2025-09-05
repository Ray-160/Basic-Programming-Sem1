//Finds Average In Array

#include <iostream>

int main(){
 	int size;
 	int sum=0;
 	
 	std::cout << "Enter Size Of Array: ";
 	std::cin >> size;
 	int array[size];
 	
 	for (int i= 1; i<=size; i++)
 	{
 	 std::cout << "Enter Element: ";
 	 std::cin >> array[i];
 	}
 	
    for (int j= 1; j<=size; j++)
    {    
      sum+= array[j];
    }
    
    double avg= sum/size;

    std::cout << "The Avg Is: " << avg << std::endl;
    
    return 0;
    
} 
