#include <iostream>

int main()
{
    const int size = 16;
    double arr[size] {12.3, 4.4, 6.01, 1.3, 46.41, 6.31, 2.4, 9.04, 7.11, 12.9, 4.13, 3.11, 62.02, 4.02, 8.81, 1.05};
    int max = 0;
    int min = 0;
    for(int i = 0; i < size; ++i)
    {
        if(arr[max] < arr[i])
        {
            max = i;
        }
        else if(arr[min] > arr[i])
        {
            min = i;
        }
    }
    std::cout << "This is a max value index = " << max << std::endl << "This is a min value index = " << min;
    return 0;
}