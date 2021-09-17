#include <iostream>

int main()
{
    const int size = 10;
    int arr[size];
    int arr2[size] {0};

    for(int i = 0; i < size; ++i)
    {
        arr[i] = rand()%20 + -9;
        std::cout << arr[i] << std::endl;
    }
    int k = 0;
    for(int j = 0; j < size; ++j)
    {
        if(arr[j] < 0)
        {
            arr2[k++] = arr[j];
        }
    }
    for(int j = 0; j < size; ++j)
    {
        if(arr[j] == 0)
        {
            arr2[k++] = arr[j];
        }
    }
    for(int j = 0; j < size; ++j)
    {
        if(arr[j] > 0)
        {
            arr2[k++] = arr[j];
        }
    }
    for(int j = 0; j < size; ++j)
    {
        std::cout << arr2[j] << std::endl;
    }
    return 0;
}