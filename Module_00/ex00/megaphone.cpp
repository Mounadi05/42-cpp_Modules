
#include <iostream>

int main (int ac , char **av)
{
    if (ac > 1)
    {
        std::string str;
        for(int i = 1 ; i < ac ;i++)
        {
            str = av[i];
            for(int it = 0 ; it < str.length() ; it++)
                std::cout << (char )toupper(str.at(it));
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
