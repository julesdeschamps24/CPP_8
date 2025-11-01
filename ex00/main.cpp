#include "easyfind.hpp"

static void test_vector()
{
    std::cout << "Vector test: " << std::endl;

    std::vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(42);
    try {
        std::vector<int>::iterator it = easyfind(v, 42);
        std::cout << "iterator = " << *it << std::endl;
    } catch (const std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        std::vector<int>::iterator it = easyfind(v, 1);
        std::cout << "iterator = " << *it << std::endl;
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
}

static void test_list()
{
    std::cout << "List test: " << std::endl;

    std::list<int> l(5, 10000);
    try {
        std::list<int>::iterator it = easyfind(l, 10000);
        std::cout << "iterator = " << *it << std::endl;
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        std::list<int>::iterator it = easyfind(l, 24);
        std::cout << "iterator = " << *it << std::endl;
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

int main()
{
    test_vector();
    test_list();
    return (0);
}