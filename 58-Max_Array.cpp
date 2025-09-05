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
 	
    for (int j= 1; j<size+1; j++)
    {    
      if (array[j]>max)
      	{     
      	 max= array[j];
      	}
    }
    
    std::cout << "The Largest Elements Is: " << max << std::endl;
    
    return 0;
    
}
