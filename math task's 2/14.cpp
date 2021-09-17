#include <iostream>

int main()
{
    const int size = 14;
    double Joo[size];
    int count = 0;
    for(int i = 0; i < size; ++i)
    {
        Joo[i] = rand()%125 + 7.012;
        std::cout << Joo[i] << std::endl;
    }
    for(int i = 0, j = size-1; i != size/2; ++i, --j)
    {
        std::swap(Joo[i], Joo[j]);
        count++;
    }
    std::cout << "Changes have been made = " << count;
    return 0;
}