#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

class Point {
private:

    int m_x;
    int m_y;

public:

    Point(int x, int y) : m_x(x), m_y(y) {}

    void setX(int x) {
        m_x = x;
    }
    int getX() const {
        return m_x;
    }
    void setY(int y) {
        m_y = y;
    }
    int getY() const {
        return m_y;
    }

    void display(void) const {
        std::cout << "(" << getX() << "," << getY() << ")" << std::endl;
    }
};

#endif