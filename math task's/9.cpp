#include <iostream>

int main()
{
    const int size = 15;
    int ar[size] {12.3, 4.4, 6.01, 1.3, 46.41, 6.31, 2.4, 9.04, 7.11, 12.9, 4.13, 3.11, 62.02, 4.02, 8.81};
    int res = 0;
    for(int j = 0; j < size; ++j)
    {
        res += ar[j];
    }
    res/=size;
    for(int ix = 0; ix < size; ++ix)
    {
        ar[ix] = ar[ix] - res;
    }
    return 0;
}