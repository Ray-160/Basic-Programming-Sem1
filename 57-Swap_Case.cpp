//Swap Case In A Given String Using ASCII Method

#include <iostream>

int main(){
    std::string str;
    
    std::cout << "Enter A String: ";
    std::cin >> str;
    
    for (int i=str.size()-1; i>=0; i--)
    {
    	if (str[i] >= 'A' && str[i] <= 'Z')
    	{
    	 str[i]= str[i]+32;
    	}
    	
    	else if (str[i]>='a' && str[i]<='z')
    	{
    	 str[i]= str[i]-32;
    	}

    }
    
    std::cout << "The Result Is: " << str << std::endl;
    
    return 0;
    
}
