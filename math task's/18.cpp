#include <iostream>

int main()
{
    const int lenght = 12;
    double arr[lenght];
    double max = arr[0];
    double min = arr[0];
    int indmax = 0;
    int indmin = 0;
    for(int i = 0; i < lenght; ++i)
    {
        arr[i] = rand()%30 -6;
        std::cout << arr[i] <<std::endl;
    }
    for(int i = 0; i < lenght; ++i)
    {
        if(max < arr[i])
        {
            max = arr[i];
            indmax = i;
        }
        if(min > arr[i])
        {
            min = arr[i];
            indmin = i;
        }
    }
    return 0;
}