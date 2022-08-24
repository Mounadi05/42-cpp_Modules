#include "Span.hpp"

Span::Span()
{
    N = 0;
    tab.reserve(0);
}
Span::Span (unsigned int n)
{
    N = n;
    tab.reserve(n);
}
Span::Span(const Span &S)
{
    *this = S;
}
Span& Span::operator=(const Span &S)
{
    this->N = S.N;
    this->tab = S.tab;
    return *this;
}
int Span::shortestSpan(void)
{
    if (tab.size() <= 1)
         throw NoSpan();
    int n = 2147483647;
    sort(tab.begin(), tab.end());
    for (int i = 0; i < (int)tab.size() - 1; i++)
        if (tab[i + 1] - tab[i] < n)
            n = tab[i + 1] - tab[i];
    return n;
}
int Span::longestSpan(void)
{
    if (tab.capacity() <= 1)
        throw NoSpan();
    sort(tab.begin(), tab.end());
    return (*tab.rbegin() - *tab.begin());
}
void Span::addNumber(int n)
{
    tab.push_back(n);
}
void Span::addMultiNumber(int *start, int *end)
{
    tab.insert(tab.end(),start,(end+1));
}
const char * Span::NoSpan::what () const throw () 
{
      return "no span can be found";
}


