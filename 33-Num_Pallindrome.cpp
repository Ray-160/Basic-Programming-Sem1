//Checks If Number Is Pallindrome Or Not

#include <iostream>

int main(){
    int num;
    int rev=0;
    
    std::cout << "Enter Number: ";
    std::cin >> num;
    
    int temp=num;
    
    while (temp>0)
    {
     rev=(rev*10)+(temp%10);
     temp=temp/10;                   
    } 
    
    if (rev==num)
    {
     std::cout << "Is A Pallindrome" << std::endl;
    }
    
    else
    {
     std::cout << "Is Not A Pallindrome" << std::endl;
    }
    
    return 0;
    
}   
