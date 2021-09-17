#include <iostream>

int main()
{
    const int size = 12;
    double ar[size] {32.4, 43.2, 41.31, 52.52, 54.37, 29.78, 65.45, 75.74, 37.85, 85.75, 53.43, 63.22};
    double key = 40.20;
    int I = 0;
    double K = 0;
    for(int i = 0; i < size; ++i)
    {
        if(ar[i] == key)
        {
            I = i;
            K = ar[i];
        }
    }
    if(size/2 < I)
    {
        std::cout << 0 << std::endl;
        std::cout << size << std::endl;
    }
    else
    {
        std::cout << K << std::endl;
        std::cout << size << std::endl;
    }
}