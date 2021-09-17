#include <iostream>

int main()
{
    const int size = 9;
    int arr[size];
    int summary = 0;
    for(int i = 0; i < size; ++i)
    {
        arr[i] = rand()%21+10;
        while(arr[i])
        {
            summary += arr[i]%10;
            arr[i] /= 10;
        }
        std::cout << arr[i] << std::endl;
        std::cout << summary;
    }
    int* ptr = new int [summary];
    delete [] ptr;
    ptr = nullptr;
    return 0;
}