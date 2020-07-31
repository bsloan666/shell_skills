
#include "api.hpp"
#include "iostream"

int main()
{
    int max = 25;
    int len = 10;
    std::vector<int> series;
    api_fibonacci(max, series);
    std::cout << "fibonacci:" << std::endl;
    for(int i=0; i < series.size();i++)
    {
        std::cout << series[i] << " ";
    }
    std::cout << std::endl;
    api_randomlist(max, len,  series);
    std::cout << "randomlist:" << std::endl;
    for(int i=0; i < series.size();i++)
    {
        std::cout << series[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
