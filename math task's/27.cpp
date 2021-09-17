#include <iostream>

int main()
{
    const int size = 19;
    int array[size];
    int max = 0;
    for(int i = 0; i < size; ++i)
    {
        array[i] = rand()%30;
        if(max < array[i])
        {
            max = array[i];
        }
    }
    for(int i = 0; i < size; ++i)
    {
        if(array[i]%2 == 0)
        {
            array[i] = max;
        }
    }
    return 0;
}