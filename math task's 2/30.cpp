#include <iostream>

int main()
{
    const int size = 10;
    int ar1[size];
    int ar2[size];
    int max1 = 0;
    int max2 = 0;
    int max1Ind = 0;
    int max2Ind = 0;
    for(int i = 0; i < size; ++i)
    {
        ar1[i] = rand()%40;
        ar2[i] = rand()%50;
        std::cout << ar1[i] << "|1|" << std::endl;
        std::cout << ar2[i] << "|2|" << std::endl;
        if(ar1[i] > max1)
        {
            max1 = ar1[i];
            max1Ind = i;
        }
        if(ar2[i] > max2)
        {
            max2 = ar2[i];
            max2Ind = i;
        }
    }
    std::swap(ar1[max1Ind], ar2[max2Ind]);
    return 0;
}