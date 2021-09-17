#include <iostream>

int main()
{
    const int size = 11;
    int ar[size];
    int sum = 0;
    int count = 0;
    for(int i = 0; i < size; ++i)
    {
        ar[i] = rand()%10;
        sum += ar[i];
    }
    sum /= size;
    for(int k = 0; k < size; k++)
    {
        if(ar[k] > sum)
        {
            count++;
        }
    }
    std::cout << count;
    return 0;
}