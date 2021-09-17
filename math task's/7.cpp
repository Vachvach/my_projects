#include <iostream>

int main()
{
    const int size = 15;
    double array[size] {12.3, 4.4, 6.01, 1.3, 46.41, 6.31, 2.4, 9.04, 7.11, 12.9, 4.13, 3.11, 62.02, 4.02, 8.81,};
    int count = 0;
    for(int i = 0; i < size; ++i)
    {
        std::cout << array[i] << std::endl;
        if(array[0] < array[i]) count++;
    }
    std::cout << count << std::endl;
}