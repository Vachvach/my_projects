#include <iostream>

int main()
{
    const int size = 10;
    int arr[size]{523,525,474,4574,747,457,247,4257,456,832};
    int key = 0;
    int ix = 0;
    for(int i = 1; i < size; ++i)
    {
        key = arr[i];
        ix = i-1;
        while(ix >= 0 && arr[ix] > key)
        {
            arr[ix+1] = arr[ix];
            ix = ix-1;
        }
        arr[ix+1] = key;
    }
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << std::endl;
    }
    return 0;
}