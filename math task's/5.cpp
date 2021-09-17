#include <iostream>

int main()
{
    const int lenght = 9;
    int array[lenght];
    int max = 0;
    int min = 0;
    for(int i = 0; i < lenght; ++i)
    {
        array[i] = rand()%90;
    }
    for(int j = 0; j < lenght; ++j)
    {
        if(array[max] < array[j])
        {
            max = j;
        }
        else if(array[min] > array[j])
        {
            min = j;
        }
    }
    int tmp;
    tmp = array[max];
    array[max] = array[min];
    array[min] = tmp;
    return 0;
}