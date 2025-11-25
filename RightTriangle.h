#pragma once
#include "TriangleBySides.h"

class RightTriangle : public TriangleBySides {
public:
    RightTriangle(double a, double b)
        : TriangleBySides(a, b, sqrt(a* a + b * b)) {
    }

    double inRadius() const {
        double a = getA(), b = getB(), c = getC();
        return (a + b - c) / 2;
    }

    double circRadius() const {
        return getC() / 2;
    }
};
