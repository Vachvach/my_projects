#include <iostream>

int main()
{
    const int size = 17;
    double Z[size];
    double count = 0;
    double count2 = 0;
    double answer = 0;
    for(int i = 0; i < size; ++i)
    {
        Z[i] = rand()%9 * 6.9;
        std::cout << Z[i] << "Z" << std::endl;
    }
    for(int i = 0; i < size; ++i)
    {
        if(i%2 == 0)
        {
            count += Z[i];
        }
        else if(i%3 == 0)
        {
            count2 += Z[i];
        }
    }
    answer = count - count2;
    std::cout << answer;
}