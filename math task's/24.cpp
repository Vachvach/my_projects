#include <iostream>

int main()
{
    const int size = 12;
    double mas[size] {32.4, 43.2, 41.31, 52.52, 54.37, 29.78, 65.45, 75.74, 37.85, 85.75, 53.43, 54.63};
    int count = 0;
    double sum = 0;
    for(int i = 0; i < size; ++i)
    {
        if(mas[size-1] > mas[i])
        {
            sum += mas[i];
            count++;
        }
    }
    std::cout << sum << " " << count;
    return 0;
}