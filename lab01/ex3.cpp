#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // initialize random number generator with current time
    srand(static_cast<unsigned int>(time(0)));
    // generate random number from 1 to 100
    int randomNumber = rand() % 100 + 1;
    int x {};
    
    
    do {
        std::cout << "Enter a number: ";
        std::cin >> x;
        if (x < randomNumber)
        {
            std::cout << "The number is too low" << std::endl;
        }
        else if (x > randomNumber)
        {
            std::cout << "The number is too high" << std::endl;
        }
    } while (x!=randomNumber);

    std::cout << "Congratulations! Correct number.";

    return 0;
}