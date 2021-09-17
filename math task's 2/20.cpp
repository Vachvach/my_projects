#include <iostream>
#include <vector>

int main()
{
    const int size = 10;
    int arr[size];
    std::vector<int> vec;
    int count = 1;
    int prev = 0;
    int cur = 0;
    int i = 0;
    int j = 0;
    for(int i = 0; i < size; ++i)
    {
        arr[i] = rand()%70;
        std::cout << arr[i] << std::endl;
    }
    
    for(;cur != size; ++cur,++prev)
    {
        if(arr[cur] > arr[cur+1])
        {
            count=0;
            std::cout << cur << " ";
            vec.push_back(cur);
        }
        else if( count == 0)
        {
            std::cout << cur << " " << std::endl;
            vec.push_back(cur);
            ++count;
        }
    }
    return 0;
}