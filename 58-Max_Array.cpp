//Finds Max Elements In An Aray

#include <iostream>

int main(){
 	int size;
 	int max=0;
  int array[size];
 	
 	std::cout << "Enter Size Of Array: ";
 	std::cin >> size;
 	
 	for (int i= 1; i<=size; i++)
 	{
 	 std::cout << "Enter Element: ";
 	 std::cin >> array[i];
 	}
 	
    for (int j= 0; j<size+1; j++)
    {    
      if (array[j]>max)
      	{     
      	 max= array[j];
      	}
    }
    
    std::cout << "The Largest Elements Is: " << max << std::endl;
    
    return 0;
    
} 
    	
