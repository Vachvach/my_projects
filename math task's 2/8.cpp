#include <iostream>

int main()
{
    const int size = 9;
    int R[9];
    int index = 0;
    int max = 0;
    for(int i = 0; i < size; ++i)
    {
        R[i] = rand()%29 -7;
        std::cout << R[i] << " R" << std::endl;
        if(max < R[i] && R[i] > 0 && R[i]%2 == 1)
        {
            max = R[i];
            index = i;
        }
    }
    std::cout << max << ":max" << index << "index" << std::endl;
    return 0;
}