#include <iostream>

int main()
{
    const int lenght = 10;
    int arr[lenght];
    for(int i = 0; i < lenght; ++i)
    {
        arr[i] = rand()%20;
    }
    for(int n = 1; n < lenght; ++n)
    {
        if(arr[0] < arr[n])
        {
            arr[0] = arr[n];
        }
    }
    return 0;
}