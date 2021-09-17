#include <iostream>

int main()
{
    const int size = 14;
    int arr[size];
    int count = 0;
    for(int i = 0; i < size; ++i)
    {
        arr[i] = rand()%20;
        if(arr[i]%2 == 0)
        {
            count++;
        }
    }
    return 0;
}