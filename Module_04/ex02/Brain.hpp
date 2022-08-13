#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include <iostream>
class Brain{
    private:
         std::string ideas[100];
    public :
        Brain();
        Brain(const Brain &b);
        Brain &operator=(const Brain &b);
        ~Brain();
};

#endif