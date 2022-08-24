#ifndef SPAN_HPP_
#define SPAN_HPP_
#include <vector>
#include <iostream>
class Span{
    private :
        unsigned int N;
        std::vector<int> tab;
    public :
    Span();
    Span (unsigned int n);
    Span(const Span &S);
    Span& operator=(const Span &S);
    int shortestSpan(void);
    int longestSpan(void);
    void addNumber(int n);
    void addMultiNumber(int *start, int *end);
    class NoSpan : public std::exception
    {
         const char* what () const throw ();
    };

};

#endif