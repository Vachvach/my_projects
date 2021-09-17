#include <iostream>

int main()
{
    const int size = 15;
    int ar[size];
    int summ = 0;
    for(int i = 0; i < size; ++i)
    {
        ar[i] = rand()%29 -10;
        if(ar[i] > 0)
        {
            summ += ar[i];
        }
        std::cout << ar[i] <<std::endl;
    }
    int* p = new int [size];
    for(int j = 0; j < size; ++j)
    {
        p[j] = rand()%29 -10;
        p[j] = summ - p[j];
        std::cout << p[j] << std::endl;
    }
    return 0;
}