#include <iostream>

int main()
{
    const int size = 14;
    int arr[size];
    int odd = 1;
    int evenInd = 0;
    for(int i = 0; i < size; ++i)
    {
        arr[i] = rand()%29;
        std::cout << arr[i] <<std::endl;
    }
    for(int i = 0; i < size; ++i)
    {
        if(arr[i]%2 == 0)
        {
            evenInd += i;
        }
        else
        {
            odd *= arr[i];
        }
    }
    std::cout << evenInd << " " << odd;
    return 0;
}