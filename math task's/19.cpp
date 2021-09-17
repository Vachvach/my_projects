#include <iostream>

int main()
{
    const int lenght = 19;
    int arr[lenght];
    int sum = 0;
    for(int i = 0; i < lenght; ++i)
    {
        arr[i] = rand()%30 -6;
        std::cout << arr[i] <<std::endl;
    }
    for(int i = 0; i < lenght; ++i)
    {
        if(arr[i] < 0)
        {
            return 0;
        }
        sum += arr[i];
    }
    return 0;
}