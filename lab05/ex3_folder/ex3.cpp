#include "ComplexNumber.hpp"

int main() {
    sr::jpo::ComplexNumber c1(4.0, 5.0);
    sr::jpo::ComplexNumber c2(4.0, -8.0);

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

    double someNumber = 13.3;
    c1 += someNumber;

    std::cout << "c1: " << c1 << std::endl;

    c1 = c1 + someNumber;

    std::cout << "c1: " << c1 << std::endl;
    
    return 0;
}
