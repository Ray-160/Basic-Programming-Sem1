//Find Grades From Given Marks

#include <iostream>

int main(){
    float marks;
    float total;
    float percentage;
    
    std::cout << "Enter Total Marks: ";
    std::cin >> total;
    
    std::cout << "Enter Marks: ";
    std::cin >> marks;
    
    percentage= (marks/total)*100;
    
    if (percentage>=81 && percentage<=100)
    {
     std::cout << "Percentage Is " << percentage << "%" << " And Grade Is A" << std::endl;
    }
    
    else if (percentage>=61 && percentage<=80)
    {
     std::cout << "Percentage Is " << percentage << "%" << " And Grade Is B" << std::endl;
    }
    
    else if (percentage>=41 && percentage<=60)
    {
     std::cout << "Percentage Is " << percentage << "%" << " And Grade Is C" << std::endl;
    }
    
    else if (percentage>=0 && percentage<=40)
    {
     std::cout << "Percentage Is " << percentage << "%" << " And Grade Is D" << std::endl;
    }
    
    return 0;
    
}
