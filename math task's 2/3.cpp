#include <iostream>

int main()
{
    const int size = 17;
    int array[size];
    int sum = 0;
    for(int i = 0; i < size; ++i)
    {
        array[i] = rand()% 30 + 10;
        std::cout << array[i] << std::endl;
    }
    int j = 0;
    while(array[size-1] != 0)
        {
            while(array[j] != 0)
            {
                sum += array[j]%10;
                array[j] /= 10;
            }
            ++j;
        }
    std::cout  << "Answer = "<< sum;
    return 0;
}