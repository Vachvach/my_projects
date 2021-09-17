#include <iostream>

int main()
{
    const int size = 15;
    int arr[size];
    int k = 0;
    int key = 0;
    int count_of_pas = 0;
    int count_of_ac = 0;
    for(int i = 0; i < size; ++i)
    {
        arr[i] = rand()%20 + -8;
        std::cout << arr[i] << std::endl;
        if(arr[i] > 0) count_of_ac++;
        else count_of_pas++;
    }
    
    for(int i = 1; i < size; ++i)
    {
        key = arr[i];
        k = i-1;
        while(k >= 0 && arr[k] > key)
        {
            arr[k+1] = arr[k];
            k = k-1;
        }
        arr[k+1] = key;
    }
    int min = 0;
    for(int i = count_of_pas; i < size; ++i)
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
        std::cout << " | " << arr[i] << std::endl;
    }
    return 0;
}