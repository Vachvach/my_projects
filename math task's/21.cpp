#include <iostream>

int main()
{
    const int size = 14;
    double ara[size] {32.4, 43.2, 41.31, 52.52, 54.37, 29.78, 65.45, 75.74, 37.85, 85.75, 53.43, 54.63, 92.13, 63.22};
    int indmin = 0;
    double min = ara[0];
    for(int i = 0; i < size; ++i)
    {
        if(min > ara[i])
        {
            min = ara[i];
            indmin = i;
        }
        std::cout << ara[i] <<std::endl;
    }
    ara[indmin] *= 3;
    std::swap(ara[indmin], ara[size-1]);
    return 0;
}