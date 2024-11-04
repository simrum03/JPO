#pragma once

#include <iostream>

class ComplexNumber {
private:
    double m_real;
    double m_imag;

public:
    ComplexNumber(double r = 0.0, double i = 0.0) : m_real(r), m_imag(i) {}


    ComplexNumber operator+(const ComplexNumber& other) const {
        return ComplexNumber(m_real + other.m_real, m_imag + other.m_imag);
    }

    ComplexNumber& operator+=(const ComplexNumber& other) {
        m_real += other.m_real;
        m_imag += other.m_imag;
        return *this;
    }

    ComplexNumber operator-(const ComplexNumber& other) const {
        return ComplexNumber(m_real - other.m_real, m_imag - other.m_imag);
    }

    ComplexNumber& operator-=(const ComplexNumber& other) {
        m_real -= other.m_real;
        m_imag -= other.m_imag;
        return *this;
    }

    ComplexNumber operator*(const ComplexNumber& other) const {
        return ComplexNumber(m_real * other.m_real, m_imag * other.m_imag);
    }

    ComplexNumber& operator*=(const ComplexNumber& other) {
        m_real *= other.m_real;
        m_imag *= other.m_imag;
        return *this;
    }

    ComplexNumber operator/(const ComplexNumber& other) const {
        return ComplexNumber(m_real / other.m_real, m_imag / other.m_imag);
    }

    ComplexNumber& operator/=(const ComplexNumber& other) {
        m_real /= other.m_real;
        m_imag /= other.m_imag;
        return *this;
    }

    bool operator==(const ComplexNumber& other) const {
        return (m_real == other.m_real) && (m_imag == other.m_imag);
    }

    bool operator!=(const ComplexNumber& other) const {
        return !(*this == other);
    }

    ComplexNumber& operator=(const ComplexNumber& other) {
        m_real = other.m_real;
        m_imag = other.m_imag;
        return *this;
    }

     friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& c) {
        os << c.m_real << (c.m_imag >= 0 ? " + " : " - ") << std::abs(c.m_imag) << "i";
        return os;
    }
};