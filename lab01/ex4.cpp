#include <iostream>

double FahrenheitToCelcius(double Fahrenheit){
    return (Fahrenheit - 32) * 5/9;
}

int main() {
    int x{};
    std::cout << "Please input value in Fahrenheit: ";
    std::cin >> x;
    std::cout << "Value in Celcius equals: " << FahrenheitToCelcius(x) << " C" << std::endl;

    return 0;
}