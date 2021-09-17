#include <iostream>

int main()
{
    const int size = 7;
    long double arr[size] {32.4, -43.2, 41.31, -52.52, 54.37, 75.74, -37.85};
    long double sum = 1;
    long double pas_sum = 1;
    long double answer = 0;
    for(int i = 0; i < size; ++i)
    {
        if(arr[i] > 0)
        {
            sum *= arr[i];
        }
        else
        {
            pas_sum *= arr[i];
        }
    }
    answer = abs(pas_sum) - sum;
    std::cout <<"Answer is = "<< answer;
    return 0;
}