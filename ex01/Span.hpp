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
        template <typename It>
        void addRange(It begin, It end) {
            std::vector<int> tmp;

            for (It i = begin; i != end; i++) {
                tmp.push_back(*i);
            }
            
            if(_cont.size() + tmp.size() > _size)
                throw std::length_error("Error: Span is full");
            
            _cont.insert(_cont.end(), tmp.begin(), tmp.end());
        }

        int shortestSpan();
        int longestSpan();
    private:
        unsigned int _size;
        std::vector<int> _cont;
};