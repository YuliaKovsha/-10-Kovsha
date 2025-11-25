#pragma once
#include "Triangle.h"

class TriangleByMedians : public Triangle {
private:
    double a, b, c;

public:
    TriangleByMedians(double ma, double mb, double mc) {
        a = (2.0 / 3.0) * sqrt(2 * mb * mb + 2 * mc * mc - ma * ma);
        b = (2.0 / 3.0) * sqrt(2 * ma * ma + 2 * mc * mc - mb * mb);
        c = (2.0 / 3.0) * sqrt(2 * ma * ma + 2 * mb * mb - mc * mc);
    }

    double getA() const override { return a; }
    double getB() const override { return b; }
    double getC() const override { return c; }
};
