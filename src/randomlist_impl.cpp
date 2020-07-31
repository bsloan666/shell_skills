// The c++ implementation of an API interface

#include "api.hpp"
#include <stdlib.h>

void api_randomlist(int max, int len, std::vector<int> &out)
{
    out.clear();
    for(int i = 0;i < len; i++)
    {
        out.push_back(rand() % max);
    }
}
