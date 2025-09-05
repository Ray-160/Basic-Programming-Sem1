//Prints Reverse Of Array

#include <iostream>

int main(){
 	int size;
 	int max=0;
 	
 	std::cout << "Enter Size Of Array: ";
 	std::cin >> size;
    int array[size];
 	 
 	for (int i= 1; i<=size; i++)
 	{
 	 std::cout << "Enter Element: ";
 	 std::cin >> array[i];
 	}
 	
    std::cout << "\nThe Reversed Elements Are: " << std::endl;
    
    for (int j=size; j>0; --j) 
    {
       std::cout << array[j] << " ";
    }

    return 0;
}
