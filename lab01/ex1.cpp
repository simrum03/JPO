#include <iostream>

int main()
{
    int x {};
    std::cout << "Please input your number: ";
    std::cin >> x;
    
    if (x < 0){
        std::cout << "Sorry but you cannot input negative number." << std::endl;
        return 1;
    }
    int sum{};

    for (int i = 0; i <= x; ++i){  
        sum += i;
        std::cout << i << std::endl;
    }

    std::cout << "The sum of your numbers from 0 to " << x << " equals: " << sum << std::endl;

    return 0;
}