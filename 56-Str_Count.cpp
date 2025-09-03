//Counts Occurence Of A Character In A String

#include <iostream>

int main(){
	std::string str;
	char ch;
	int count=0;
	
	std::cout << "Enter A String: ";
	std::cin >> str;
	
	std::cout << "Enter Character: ";
	std::cin >> ch;
	
	for (int i= str.size()-1; i>=0; i--)
	{
		if (str[i]==ch)
		{
		 count++;
		}
		
	}
	
	std::cout << "Count Is: " << count << std::endl;
	
	return 0;
	
}
