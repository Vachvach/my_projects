#include <iostream>

int main()
{
    const int size = 14;                                                
    float arr[size] {32.4, 43.2, 41.31, 52.52, 54.37, 29.78, 65.45, 75.74, 37.85, 85.75, 53.43, 54.63, 92.13, 63.22};
    float key = 0;
    int i = 0;
    for(int j = 1; j < size/2; ++j)
    {
        i = j-1;
        key = arr[j];
        while(i >= 0 && arr[i] > key)
        {
            arr[i+1] = arr[i];
            i = i - 1;
        }
        arr[i+1] = key;
    }
    for(int i = size/2; i < size; ++i)
    {
        for(int j = i+1; j < size; ++j)
        {
            if(arr[j] > arr[i])
            {
                float tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << std::endl;
    }
}