#include <iostream>

int main()
{
    const int size = 15;
    long long array[size];
    int count = 0;
    int sum = 1;
    int cZero = 0;
    for(int i = 0; i < size; ++i)
    {
        array[i] = rand()%30 -6;
        std::cout << array[i] <<std::endl;
    }
    for(int i = 0; i < size; ++i)
    {
        if(array[i] == 0)
        {
            cZero++;
        }
        else if(array[i] < 0)
        {
            count++;
        }
        else if(array[i]%2 == 0)
        {
            sum *= array[i];
        }
    }
    std::cout << cZero  << " "<< count << " " << sum;
    return 0;
}