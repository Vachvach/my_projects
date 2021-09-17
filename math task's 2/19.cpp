#include <iostream>
#include <vector>
int main()
{
    const int size = 15;
    int Z[size];
    int sum = 0;
    bool isTrue = false;
    std::vector <int> vec;
    for(int i = 0; i < size; ++i)
    {
        Z[i] = rand()%20 + -10;
        sum += Z[i];
        if(Z[i] == 0)
        {
            isTrue = true;
        }
        std::cout << Z[i] << std::endl;
    }
    if(isTrue)
    {
        for(int i = 0; i < size; ++i)
        {
            if(Z[i] < 0)
            {
                while(Z[i] != 0)
                {
                    vec.push_back(Z[i]);
                    ++i;
                }
                break;
            }
        }
    }
    for(int h = 0; h < vec.size(); ++h)
    {
        std::cout << vec[h] << " vec " << std::endl;
    }
    return 0;
}