#pragma once

#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <string>
#include <vector>
#include <list>

template <typename T>
typename T::iterator easyfind(T& container, int occ);

#include "easyfind.tpp"