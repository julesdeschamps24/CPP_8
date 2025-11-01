#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T& container, int occ) {
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), occ);
    if(it == container.end())
        throw std::invalid_argument("Error: any occurence");
    return (it);
}