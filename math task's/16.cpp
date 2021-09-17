#include <iostream>

int main()
{
    const int lenght = 12;
    double ar[lenght];
    int count = 0;
    double min = ar[1];
    int indMin = 0;
    int indMax = 0;
    double max = ar[0];
    for(int i = 0; i < lenght; ++i)
    {
        ar[i] = rand()%30 -6;
        std::cout << ar[i] <<std::endl;
    }
    for(int i = 0; i < lenght; ++i)
    {
        if(max < ar[i])
        {
            max = ar[i];
            indMax = i;
        }
        if(min > ar[i])
        {
            min = ar[i];
            indMin = i;
        }
    }
    std::cout << abs(indMin - indMax)-1;
    return 0;
}