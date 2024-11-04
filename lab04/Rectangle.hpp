#pragma once

#include "Figure.hpp"

class Rectangle : public Figure {
private:
    double m_a;
    double m_b;

protected:
    // parametrized constructor (why this one is protected?)
    Rectangle(double a, double b, const Point &p, std::string name) : m_a(a), m_b(b), Figure(p, name) {}

public:
    // parametrized constructor
    Rectangle(double a, double b, const Point &p) : Rectangle(a,b,p,"rectangle") {}
   
    double area() const override {
        return abs(m_a) * abs(m_b);
    }

    void setA(double a) {
        m_a = a;
    }
    void setB(double b) {
        m_b = b;
    }    
    double getA() const {
        return m_a;
    }
    double getB() const {
        return m_b;
    } 

    void description() const override {
        std::cout << "I have sides of length " << m_a << " and " << m_b << std::endl;
        printCentre();
    }
};