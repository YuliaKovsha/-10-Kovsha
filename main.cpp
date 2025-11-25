#include <iostream>
#include <Windows.h>
#include "TriangleByVertices.h"
#include "TriangleBySides.h"
#include "TriangleByMedians.h"
#include "RightTriangle.h"
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    TriangleBySides t1(3, 4, 5);
    cout << "Медіана до a: " << t1.medianA() << endl;
    cout << "Середня лінія паралельна b: " << t1.midlineB() << endl;
    cout << "Площа: " << t1.area() << endl;

    RightTriangle rt(3, 4);
    cout << "Вписане коло r = " << rt.inRadius() << endl;
    cout << "Описане коло R = " << rt.circRadius() << endl;

    return 0;
}
