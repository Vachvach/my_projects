#include <iostream>

int main()
{
    const int lenght = 10;
    int arr[lenght];
    int sum_even = 0;
    int sum_odd = 0;
    int answer = 0;
    for(int i = 0; i < lenght; ++i)
    {
        arr[i] = rand()%50;
        std::cout << arr[i] << std::endl;
        if(i%2 == 0)
        {
            sum_even += arr[i];
        }
        else
        {
            sum_odd += arr[i];
        }
    }
    answer = sum_even % sum_odd;
    std::cout << "Answer =" << answer;
    return 0;
}