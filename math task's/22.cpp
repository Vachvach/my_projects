#include <iostream>

int main()
{
    const int size = 15;
    float zang[size] {32.4, 43.2, 41.31, 52.52, 54.37, 29.78, 65.45, 75.74, 37.85, 85.75, 53.43, 54.63, 92.13, 63.22, 19.45};
    for(int j = size-1, i = 0; j >= 0; --j, ++i)
    {
        if(j != i)
        {
            std::swap (zang[j], zang[i]);
        }
        else break;
    }

    for(int i = 0; i < size; ++i)
    {
        std::cout << zang[i] <<std::endl;
    }
    return 0;
}