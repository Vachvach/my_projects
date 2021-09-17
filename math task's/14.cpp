#include <iostream>

int main()
{
    const int size = 17;
    int arz[size];
    int odds = 0;
    for(int i = 0; i < size; ++i)
    {
        arz[i] = rand()%29;
        std::cout << arz[i] <<std::endl;
        if(arz[i]%2 == 1) odds += arz[i];
        
    }
    for(int i = 0; i < size; ++i)
    {
        if(arz[i] < -2 or arz[i] > 2)
        {
            if(!(arz[i]%3)) 
            {
                arz[i] = odds;
                std::cout << "F";
            }
        }
        std::cout  << " |  | "  << arz[i] <<std::endl;
    }
}