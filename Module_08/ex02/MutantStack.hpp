#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP
#include <stack>
#include <iostream>
template <typename T>
class MutantStack : public std::stack<T >{
    public :
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::iterator iterator;

    MutantStack():std::stack<T>(){}
    MutantStack(const MutantStack &M)
    {
        *this = M;
    }
    MutantStack & operator=(const MutantStack&M)
    {
        this->c = M.c;
        return *this;
    }
    ~MutantStack(){}
    iterator begin(){return this->c.begin();}
    iterator end(){return this->c.end();}
    reverse_iterator rbegin(){return this->c.rbegin();}
    reverse_iterator rend(){return this->c.rend();}
};

#endif