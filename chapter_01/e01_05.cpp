#include<iostream>

int main()
{
    std::cout << "Enter first number" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 ;
    std::cout << "Enter second number" << std::endl;
    std::cin >> v2;
    std::cout << "The multiplication of " << v1 << " and " << v2 << " is " <<  v1*v2 << "\n" << std::endl;
    return 0;
}
