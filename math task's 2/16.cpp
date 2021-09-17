#include <iostream>

int main()
{
    const int s = 10;
    int arr[s];
    int sum = 0;
    int count = 0;
    for(int i = 0; i < s; ++i)
    {
        arr[i] = rand()%40 -20;
    }
    for(int i = 0; i < s; ++i)
    {
        if(arr[i] > 0)
        {
            sum += arr[i];
            count++;
        }
    }
    std::cout << "The summary = "<< sum << "The count is a = "<< count;
    return 0;
}