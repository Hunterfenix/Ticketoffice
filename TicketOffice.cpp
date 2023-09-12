#include <iostream>

int main()
{
    int age;
    
    std::cout << "How old are you?" << std::endl;
    std::cin >> age;
    
    if (age > 60 || age < 5)
        std::cout << "Ticket is free";
    else if (age > 15 && age < 60)
        std::cout << "The ticket costs 10 euros";
    else if (age < 15 && age>5)
        std::cout << "The ticket costs 5 euros";
    
    return 0;
}
