//Check If A String Contains A Digit

#include <iostream>

int main(){
    std::string str;

    std::cout << "Enter A String: ";
    std::cin >> str;
    
    bool ch= true;
    
    for (int i=0; i<str.length(); i++)
    {
     	if (isdigit(str[i]) == true)
     	{
     	 ch= false;
     	 break;
     	}
     	
    }
    
    if (ch==false)
    {
     std::cout << "Contains Digits" << std::endl;
    }
    
    else if (ch==true)
    {
     std::cout << "Does Not Contain Digit" << std::endl;
    }
    
    return 0;

}
