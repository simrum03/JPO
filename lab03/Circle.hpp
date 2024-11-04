#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Point.hpp"
#include <cmath>
#include <iostream>

class Circle {
private:
    double *m_radius;
    Point m_center;
public:
    Circle(double r, int centerX, int centerY) : m_radius(new double(r)), m_center(centerX, centerY) {} 

    ~Circle(){
        delete m_radius;
        std::cout << "Memory freed." << std::endl;
    }

    void setR(double r) {
        *m_radius = r;
    }
    double getR() const {
        return *m_radius;
    }

    void setCenter(int x, int y) {
        m_center.setX(x);
        m_center.setY(y);
    }
    Point getCenter() const {
        return m_center;
    }

    double area() const {
        return (M_PI * pow(getR(), 2));
    }

};

#endif