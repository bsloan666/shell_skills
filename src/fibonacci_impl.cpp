// The c++ implementation of an API interface

#include "api.hpp"

void api_fibonacci(int max, std::vector<int> &out)
{
    int i=1;
    out.clear();
    out.push_back(i);
    while(i <= max)
    {
        out.push_back(i);
        i = out[out.size()-2]+out[out.size()-1];
    }
}
