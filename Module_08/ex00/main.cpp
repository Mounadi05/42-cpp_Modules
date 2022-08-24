#include "easyfind.hpp"
#include <vector>
#include <list>

int main ()
{
    std::vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    std::cout << easyfind(a,0) << std::endl;
    std::list<int> c;
    c.push_back(1);
    c.push_back(20);
    c.push_back(15);
    c.push_back(3);
    c.push_back(41);
    std::cout << easyfind(c,15) << std::endl;
}