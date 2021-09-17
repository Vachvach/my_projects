#include <iostream>

int main()
{
    const int size = 16;
    int arz[size];
    int count = 0;
    for(int i = 0; i < size; ++i)
    {
        arz[i] = rand()%29;
        std::cout << arz[i] <<std::endl;
    }
    for(int i = 0; i < size; ++i)
    {
        if(arz[i] < -2 or arz[i] > 2)
        {
            if(!(arz[i]%3)) 
            {
                arz[i] = 0;
                std::cout << "F";
            }
        }
        std::cout  << " |  | "  << arz[i] <<std::endl;
    }
}