#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdexcept>
#include <ctime>
#include <cstdlib>
#include <climits>

class Span
{
    public:
        Span(unsigned int nb_n = 0);
        Span(const Span& copy);
        Span& operator=(const Span& other);
        ~Span();

        void addNumber(int nb);
        int shortestSpan();
        int longestSpan();
    private:
        unsigned int _size;
        std::vector<int> _cont;
};