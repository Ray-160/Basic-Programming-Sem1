//Counts Vowels In A String

#include <iostream>

int main(){
    std::string str;
    int c=0;

    std::cout << "Enter A String: ";
    std::cin >> str;
    
    for (int i= str.size()-1; i>=0; i--)
    {
     	if ( str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') 
     	{
     	 c++;
     	}
     	
    }

    std::cout << "Number Of Vowels: " << c << std::endl;

    return 0;

}
