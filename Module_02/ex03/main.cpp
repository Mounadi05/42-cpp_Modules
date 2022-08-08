#include "Point.hpp"

int main ()
{
    Fixed x1(0);
    Fixed x2(0);
    Point a(x1,x2);
    Fixed x3(10);
    Fixed x4(30);
    Point b(x3,x4);
    Fixed x5(20);
    Fixed x6(0);
    Point c(x5,x6);
    Fixed x7(10);
    Fixed x8(15);
    Point d(x7,x8);
    std::cout << std::boolalpha << bsp( a, b, c, d) << std::endl;
}