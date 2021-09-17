#include <iostream>

int main()
{
    const int size =10;
    int array[size] {534,436,478,694,676,469,356,358,245,289};
    for(int i = 0; i < size; ++i)
    {
        for(int j = i+1; j < size; ++j)
        {
            if(array[j] > array[i])
            {
                std::swap(array[j], array[i]);
            }
        }
    }
    for(int i = 0; i < size; ++i)
    {
        std::cout << array[i] << std::endl;
    }
    return 0;
}