#include <iostream>

int main() {

    int table[4];
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Please input " << (i+1) << " number." << std::endl;
        std::cin >> table[i];
    }
    return 0;
}