#include <iostream>

int main()
{
    const int size = 12;
    int array[size];
    int summary = 0;
    int array2[size];
    for(int i = 0; i < size; ++i)
    {
        array[i] = rand()%10;
        summary += array[i];
    }
    summary /= size;
    for(int j = 0; j < size; ++j)
    {
        array2[j] = rand()%10;
    }
    array2[5] = summary;
    return 0;
}