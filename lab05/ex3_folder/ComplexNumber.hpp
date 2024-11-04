#pragma once

#include <iostream>

template <typename T>
class ComplexNumber {
private:
    T m_real;
    T m_imag;

public:
    ComplexNumber(T r = 0.0, T i = 0.0) : m_real(r), m_imag(i) {}


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

    T operator==(const ComplexNumber& other) const {
        return (m_real == other.m_real) && (m_imag == other.m_imag);
    }

    T operator!=(const ComplexNumber& other) const {
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