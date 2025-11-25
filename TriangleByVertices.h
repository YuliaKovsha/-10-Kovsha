#pragma once
#include "Triangle.h"

class TriangleByVertices : public Triangle {
private:
    double x1, y1, x2, y2, x3, y3;

    static double dist(double x1, double y1, double x2, double y2) {
        return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    }

public:
    TriangleByVertices(double X1, double Y1,
        double X2, double Y2,
        double X3, double Y3)
        : x1(X1), y1(Y1), x2(X2), y2(Y2), x3(X3), y3(Y3) {
    }

    double getA() const override { return dist(x2, y2, x3, y3); }
    double getB() const override { return dist(x1, y1, x3, y3); }
    double getC() const override { return dist(x1, y1, x2, y2); }
};
