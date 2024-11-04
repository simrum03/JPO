#pragma once

#include "Figure.hpp"
#include <cmath>

class Circle : public Figure {
private:
    double *m_radius;

protected:
    // parametrized constructor (why this one is protected?)
    Circle(double r, const Point &p, std::string name) : m_radius(new double(r)), Figure(p, name) {}

public:
    // parametrized constructor
    Circle(double r, const Point &p) : Circle(r,p,"circle") {}

    ~Circle() {
        delete m_radius;
        std::cout << "Circle deleted" << std::endl;
    }

    void setR(double r) {
        if (r > 0) { 
            *m_radius = r;
        }
        else {
            std::cout << "Circle radius cannot be negative or equal to zero"; 
        } 
    }

    double getR() const { 
        return *m_radius;
    }

    double area() const override {
        return (M_PI * pow(*m_radius,2.0));
    }

    void description() const override {
        std::cout << "I have radius of length " << *m_radius << std::endl;
        printCentre();
    }
};