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
        std::cout << std::endl;
    }
    {
        int sp_size = 10001;
        std::cout << "More than 10 000 numbers: " << std::endl;
        std::srand(std::time(NULL));
        Span sp(sp_size);

        for (int i = 0; i < sp_size; i++)
            sp.addNumber(std::rand() % UINT_MAX);
        std::cout << "Shortest span: " <<sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
        std::cout << std::endl;
    }
    {
        std::cout << "Add range : " << std::endl;
        Span sp(10);

        std::vector<int> vec;
        vec.push_back(0);
        vec.push_back(43);
        vec.push_back(9);
        vec.push_back(2);
        vec.push_back(5);
        vec.push_back(3);
        vec.push_back(69);
        sp.addRange(vec.begin(), vec.end());

        std::cout << "Shortest span: " <<sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    }
    return (0);
}