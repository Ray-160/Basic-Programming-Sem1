//Finds Minimum Element Of Array

#include <iostream>

int main(){
 	int size,min;
 	
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
      if (j==0)
      {
        min=array[j];
      }
      else if (array[j]<min)
      	{     
      	 min= array[j];
      	}
    }
    
    std::cout << "The Smallest Elements Is: " << min << std::endl;
    
    return 0;
    
}
