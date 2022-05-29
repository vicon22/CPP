
#include "MutantStack.h"
#include <iostream>
#include <list>

int main()
{
    {
        std::cout << "---------------------" << std::endl;
        std::cout << "MutantStack ints" << std::endl;
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << "Top element - " << mstack.top() << std::endl;
        mstack.pop();
        std::cout << "Size - " << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        std::cout << "Iterating" << std::endl;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        MutantStack<int>::reverse_iterator rit = mstack.rbegin();
        MutantStack<int>::reverse_iterator rite = mstack.rend();
        std::cout << "reverse iterating" << std::endl;
        while (rit != rite)
        {
            std::cout << *rit << std::endl;
            ++rit;
        }
        std::cout << "---------------------" << std::endl;

        std::cout << "Same thing with deque" << std::endl;
        std::deque<int> d;
        d.push_back(5);
        d.push_back(17);
        std::cout << "Top element - " << d.back() << std::endl;
        d.pop_back();
        std::cout << "Size - " << d.size() << std::endl;
        d.push_back(3);
        d.push_back(5);
        d.push_back(737);
        d.push_back(0);
        std::deque<int>::iterator iter = d.begin();
        std::deque<int>::iterator itere = d.end();
        std::cout << "Iterating" << std::endl;
        while (iter != itere)
        {
            std::cout << *iter << std::endl;
            ++iter;
        }
        std::deque<int>::reverse_iterator riter = d.rbegin();
        std::deque<int>::reverse_iterator ritere = d.rend();
        std::cout << "reverse iterating" << std::endl;
        while (riter != ritere)
        {
            std::cout << *riter << std::endl;
            ++riter;
        }

        std::stack<int> s(mstack);
        std::cout << "---------------------" << std::endl;

        std::cout << "Stack" << std::endl;
        while (s.size() != 0) {
            std::cout << s.top() << std::endl;
            s.pop();
        }
    }
    {
        std::cout << "---------------------" << std::endl;
        std::cout << "List" << std::endl;
        std::list<int> list;
        list.push_front(5);
        list.push_front(17);
        std::cout << "First elemet - " << *list.begin() << std::endl;
        list.pop_front();
        std::cout << "List size - " << list.size() << std::endl;
        list.push_front(3);
        list.push_front(5);
        list.push_front(737);
        list.push_front(0);
        std::list<int>::reverse_iterator it = list.rbegin();
        std::list<int>::reverse_iterator ite = list.rend();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    {
        std::cout << "---------------------" << std::endl;
        std::cout << "MutantStack strs" << std::endl;
        MutantStack<std::string> mstack;
        std::cout << "Is MutantStack empty - " << (mstack.empty() ? "true" : "false") << std::endl;
        mstack.push("raz");
        mstack.push("dva");
        mstack.push("tri");
        mstack.push("test");
        MutantStack<std::string>::iterator it = mstack.begin();
        MutantStack<std::string>::iterator ite = mstack.end();
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        mstack.pop();
        std::cout << "---------------------" << std::endl;
        std::cout << "MutantStack pop first element" << std::endl;
        it = mstack.begin();
        ite = mstack.end();
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    return 0;

}