#include <iostream>

int main()
{
    const int size = 12;
    double arra[size] {12.3, 4.4, 6.01, 1.3, 2.4, 9.04, 7.11, 12.9, 4.13, 3.11, 4.02, 8.81,};
    double tmp = 0;
    int min = arra[0];
    int max = 0;
    for(int i = 0; i < size; ++i)
    {
        for(int j = i+1; j < size; ++j)
        {
            if(arra[i] > arra[j])
            {
                tmp = arra[i];
                arra[i] = arra[j];
                arra[j] = tmp;
                max = j;
            }
            else if(min > arra[i])
            {
                min  = i;
            }
        }
    }
    double sum = arra[min] + arra[max];
    for(int i = 0; i < size; ++i)
    {
        std::cout << arra[i] << std::endl;
    }
    std::cout <<" Meci ev Poqr arjeqneri gumare = " << sum;
    return 0;
}