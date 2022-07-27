#include "PhoneBook.hpp"

int main ()
{
    PhoneBook c;
    std::string commande;
    std::cout << "\t\t\t My Awesome PhoneBook " << std::endl ;
    int i = 0;
    int check = 0;

    while(1)
    {
        std::cout << "\n   enter your command : ";
        std::getline(std::cin,commande);
        if (!commande.empty())
        {
            if (commande == "ADD")
            {
                c.ADD(i, check);
                if (check < 7)
                    check++;
                i++;
                if (check == 7)
                    i = 0;
            }
            else if (commande == "EXIT")
                c.EXIT();
            else if (commande == "SEARCH")
                c.SEARCH(check);
            else
                std::cout << "\n * Command not found *\n";
        }
        else if (std::cin.eof())
            exit(0);
    }    
}