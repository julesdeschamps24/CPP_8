#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T> {
    public:
        MutantStack();
        MutantStack(const MutantStack& copy);
        MutantStack& operator=(const MutantStack& other);
        ~MutantStack();

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin();
        iterator end();
};

#include "MutantStack.tpp"