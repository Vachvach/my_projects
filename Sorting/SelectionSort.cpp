#include <iostream>

int main()
{
    const int size = 10;
    int arr[size] {54,63,76,85,29,82,23,53,37,72};
    int min = 0;
    for(int i = 0; i < size; ++i)
    {
        min = i;
        for(int j = i; j < size; ++j)
        {
            if(arr[min] < arr[j])
            {
                min = j;
            }
        }
        std::swap(arr[i], arr[min]);
    }
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << std::endl;
    }
}