#include <iostream>

int main()
{
    const int size = 10;
    int arr[size];
    int sum = 0;
    int count = 0;
    int answer = 0;
    for(int i = 0; i < size; ++i)
    {
        arr[i] = rand()%50;
        std::cout << arr[i] << std::endl;
        sum += arr[i];
    }
    sum /= size;
    for(int i = 0; i < size; ++i)
    {
        if(arr[i] > sum)
        {
            count++;
        }
    }
    answer = (count * 100) / size;
    std::cout << "Percentage content is a = " << answer << "%";
}