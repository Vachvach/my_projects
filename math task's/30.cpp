#include <iostream>

int main()
{
    const int size = 12;
    double arr[size];
    double Min = arr[0];
    int index = 0;
    for(int i = 0; i < size; ++i)
    {
        arr[i] = rand()%20 - 5.55;
        std::cout << arr[i] << std::endl;
        if(Min > arr[i])
        {
            Min = arr[i];
            index = i;
        }
    }
    std::cout << Min << std::endl;
    arr[index] += index;
    std::cout << arr[index];
    return 0;
}