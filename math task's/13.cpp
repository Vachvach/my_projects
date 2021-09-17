#include <iostream>

int main()
{
    const int size = 15;
    int data[size];
    int max = 0;
    int sum = 0;
    for(int i = 0; i < size; ++i)
    {
        data[i] = rand()%30;
        std::cout << data[i] <<std::endl;
    }
    int min = data[0];
    for(int ix = 0; ix < size; ++ix)
    {
        if(data[max] < data[ix]) max = ix;
        else if(data[min] > data[ix]) min = ix;
    }
    int dif = data[max] - data[min]; 
    sum = data[min] + data[max];
    std::cout << "Its a differenc = " << dif << std::endl << "Its a summary = " << sum;
    return 0;
}