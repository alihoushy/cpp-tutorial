#include <iostream>

using namespace std;

union Point {
    int i;
    char c;
};

void runUnionExample()
{
    // A union variable
    Point point;

    // Assigning value to c, i will also assigned the same
    point.c = 'A';

    cout << "point.i: " << point.i << ", point.c: " << point.c << endl;
}
