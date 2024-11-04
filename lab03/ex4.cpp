#include "Point.hpp"

int main(){
    Point example(5,3);
    example.display();

    example.setX(10);
    example.setY(5);

    example.display();

    return 0;
}
