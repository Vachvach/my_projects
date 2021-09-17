#include <iostream>
#include <vector>

int main()
{
    const int size = 12;
    int arr[size];
    std::vector<int> V;
    for(int i = 0; i < size; ++i)
    {
        arr[i] = rand()%60;
        std::cout << arr[i] << std::endl;
    }
    for(int i = 1; i < size-1;)
    {
        if(arr[i] > arr[i+1] && arr[i] > arr[i-1])
        {
            V.push_back(arr[i]);
            i+=2;
        }
        else
        {
            ++i;
        }
    }
    for(int i = 0; i < V.size(); ++i)
    {
        std::cout << V[i] << std::endl;
    }
    return 0;
}