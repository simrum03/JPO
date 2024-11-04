#include "ComplexNumber.hpp"

int main() {
    ComplexNumber c1(4.0, 5.0);
    ComplexNumber c2(4.0, -8.0);

    std::cout << "+ overload: " << c1+c2 << std::endl;
    c2 += c1;
    std::cout << "+= overload: " << c2 << " (new c2 value)" << std::endl;
    std::cout << "- overload: " << c2-c1 << std::endl;
    c2 -= c1;
    std::cout << "-= overload: " << c2 << " (new c2 value)" << std::endl;
    std::cout << "* overload: " << c2*c1 << std::endl;
    c2 *= c1;
    std::cout << "*= overload: " << c2 << " (new c2 value)" << std::endl;
    std::cout << "/ overload: " << c2 / c1 << std::endl;
    c2 /= c1;
    std::cout << "/= overload: " << c2 << " (new c2 value)" << std::endl;
    std::cout << "c1 equals c2 (== overload): " << (c1 == c2) << std::endl;
    std::cout << "c1 equals c2 (!= overload): " << (c1 != c2) << std::endl;
    c2 = c1;
    std::cout << "= overload: " << c2 << " (new c2 value)" << std::endl;

    return 0;
}
