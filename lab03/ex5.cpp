#include "Circle.hpp"

int main() {
    Circle example(3,0,0);

    std::cout << "Center of your circle: "; 
    example.getCenter().display();
    std::cout << "with r = " << example.getR() << std::endl;
    std::cout << "Area of your circle equals: " << example.area() << std::endl;



    //changing parameters

    example.setCenter(5,5);
    example.setR(5);

    std::cout << "New center of your circle: "; 
    example.getCenter().display();
    std::cout << "with r = " << example.getR() << std::endl;
    std::cout << "Area of your new circle equals: " << example.area() << std::endl;

    return 0;
}