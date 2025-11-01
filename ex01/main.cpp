#include "Span.hpp"

int main()
{
    {
        std::cout << "Mandatory: " << std::endl;
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << std::endl;
    }
    {
        std::cout << "Error check: " << std::endl;
        Span s = Span(1);

        s.addNumber(42);
        try {
            s.addNumber(100);
        } catch (std::exception & e) {
            std::cerr << e.what() << std::endl;
        }
        try {
            s.shortestSpan();
        } catch (std::exception & e) {
            std::cerr << e.what() << std::endl;
        }
        try {
            s.longestSpan();
        } catch (std::exception & e) {
            std::cerr << e.what() << std::endl;
        }
    }
    return (0);
}