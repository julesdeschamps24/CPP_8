#include "Span.hpp"

Span::Span(unsigned int size) : _size(size), _cont() {}
Span::Span(const Span& copy) : _size(copy._size), _cont() { *this = copy; }
Span& Span::operator=(const Span& other) { 
    if(this != &other)
    {
        _size = other._size;
        _cont = other._cont;
    }
    return (*this); }
Span::~Span() {}

void Span::addNumber(int nb) {
    if(_cont.size() >= _size)
        throw std::length_error("Error: Span is full");
    _cont.push_back(nb);
}

int Span::shortestSpan() {
    if(_cont.size() < 2)
        throw std::length_error("Error: Not enough numbers to find a span");
    
    std::vector<int> sorted = _cont;
    int cont_size = sorted.size();
    std::sort(sorted.begin(), sorted.end());

    int min_span = sorted[1] - sorted[0];
    int diff;

    for (int i = 1; i < cont_size - 1; i++)
    {
        diff = sorted[i + 1] - sorted[i];
        if(diff < min_span)
            min_span = diff;
    }
    return (min_span);
}

int Span::longestSpan() {
    if(_cont.size() < 2)
        throw std::length_error("Error: Not enough numbers to find a span");

    std::vector<int>::iterator min_it;
    min_it = std::min_element(_cont.begin(), _cont.end());
    std::vector<int>::iterator max_it;
    max_it = std::max_element(_cont.begin(), _cont.end());
    return (*max_it - *min_it);
}