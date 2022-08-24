#include "MutantStack.hpp"
int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
      std::cout << *it << std::endl;
      ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "************************test2**************************" << std::endl;
    {
        MutantStack<int> a;
        a.push(10);
        a.push(820);
        a.push(215);
        a.push(22);
        MutantStack<int> b;
        for(int i = 1; i < 10 ; i++)
          b.push(i);
        a.swap(b);
        std::cout << "stack a" << std::endl;
        MutantStack<int>::iterator it = a.begin();
        MutantStack<int>::iterator ite = a.end();
        while (it != ite)
        {
            std::cout << *it  << "  ";
            it++;
        }
        std::cout << std::endl;
        std::cout << "stack b" << std::endl;
        it = b.begin();
        ite = b.end();
        while (it != ite)
        {
            std::cout << *it  << "  ";
            it++;
        }
        std::cout << "\nstack a in reverse" << std::endl;
        MutantStack<int>::reverse_iterator rit = a.rbegin();
        MutantStack<int>::reverse_iterator rite = a.rend();
        while (rit != rite)
        {
          std::cout << *rit  << "  ";
          rit++;
        } 
    }
    return 0;
}