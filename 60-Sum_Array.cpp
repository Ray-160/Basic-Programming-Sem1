//Finds Sum Of Elements In Array

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

    std::cout << "The Sum Is: " << sum << std::endl;
    
    return 0;
    
} 
