#include <iostream>

int main()
{
    const int size = 10;
    double arr[size];
    double sum = 0;
    double mul = 1;
    int answer = 0;
    for(int i = 0; i < size; ++i)
    {
        arr[i] = rand()%29 - 9.55;
        std::cout << arr[i] << std::endl;
    }
    for(int k = 0; k < size; ++k)
    {
        if(arr[k] > 0)
        {
            mul *= arr[k];
        }
        else
        {
            sum += abs(arr[k]);
        }
    }
    answer = sum / mul;
    double x = answer;
    x = sum - mul * x;
    std::cout << sum << "  " << mul << std::endl;
    std::cout << x;
}