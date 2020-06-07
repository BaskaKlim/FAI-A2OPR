#include <iostream>
#include <cmath>


struct Position {
    double x;
    double y;

    Position(double x, double y) : x(x), y(y)
    {
    }
};

int main()
{
    Position p1(2,3);
    Position p2(5,7);
}
