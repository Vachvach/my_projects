#include <iostream>

int main()
{
    const int size = 11;
    int arr[size];
    int sum = 0;
    for(int i = 0; i < size; ++i)
    {
        arr[i] = rand()%123 -80;
        std::cout << arr[i] << std::endl;
        if(arr[i] < 0 && (abs(arr[i])%2) == 1)
        {
            sum += arr[i];
        }
    }
    for(int i = 0; i < size; ++i)
    {
        if(arr[i]%3 == 0)
        {
            arr[i] = sum;
        }
        std::cout  << arr[i] << std::endl;
    }
    return 0;
}