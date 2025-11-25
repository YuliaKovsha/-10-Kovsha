#pragma once
#include "Triangle.h"

class TriangleBySides : public Triangle {
private:
    double a, b, c;

public:
    TriangleBySides(double A, double B, double C)
        : a(A), b(B), c(C) {
    }

    double getA() const override { return a; }
    double getB() const override { return b; }
    double getC() const override { return c; }
};

