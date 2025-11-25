#pragma once
#include <cmath>
#include <iostream>
using namespace std;

class Triangle {
public:
    virtual double getA() const = 0;
    virtual double getB() const = 0;
    virtual double getC() const = 0;

    // Формула медіани: m_a = 0.5 * sqrt(2b² + 2c² – a²)
    double medianA() const {
        double a = getA(), b = getB(), c = getC();
        return 0.5 * sqrt(2 * b * b + 2 * c * c - a * a);
    }

    double medianB() const {
        double a = getA(), b = getB(), c = getC();
        return 0.5 * sqrt(2 * a * a + 2 * c * c - b * b);
    }

    double medianC() const {
        double a = getA(), b = getB(), c = getC();
        return 0.5 * sqrt(2 * a * a + 2 * b * b - c * c);
    }

    // Площа Герона
    double area() const {
        double a = getA(), b = getB(), c = getC();
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    // Середня лінія паралельна стороні a: m_a = a / 2
    double midlineA() const { return getA() / 2; }
    double midlineB() const { return getB() / 2; }
    double midlineC() const { return getC() / 2; }

    virtual ~Triangle() {}
};
