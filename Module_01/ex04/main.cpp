#include <iostream>
#include <fstream>

int main (int ac, char **av)
{
    std::ofstream file_o;
    std::ifstream file_i;
    std::string name = ".replace";
    if (ac == 4)
    {
        int min = 0;
        std::string str;
        file_o.open(av[1] + name);
        file_i.open(av[1]);
        std::string find = av[2];
        while(getline(file_i, str))
        {
            while(((int )str.find(av[2]) != - 1))
            {
                min = str.find(av[2]);
                str.erase(min, find.length());
                str.insert(min,av[3]);
            }  
            file_o << str << std::endl;
        }
    }
    else 
        std::cout << "\t * wrong arguments *" << std::endl;
}