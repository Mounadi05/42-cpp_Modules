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
        int max = 0;
        std::string str;
        file_o.open(av[1] + name);
        file_i.open(av[1]);
        std::string replace = av[3]; 
        while(getline(file_i, str))
        {
            if (str.find(av[2]) != - 1)
            {
                min  = str.find_first_of(av[2]);
                max  = str.find_last_of(av[2]);
                int i = 0;
                for(; min <= max ; min++)
                    str[min] = replace[i++];
                if (replace[i] != '\0')
                    str.insert(i , replace.substr(i));
            }    
            file_o << str << std::endl;
           
        }
    }
    else 
        std::cout << "\t * wrong arguments *" << std::endl; 
    
}