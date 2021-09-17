#include <iostream>
#include <vector>

int main()
{
    const int size = 14;
    int arr[size];
    int index[size];
    std::vector <int> v;
    for(int i = 0; i < size; ++i)
    {
        arr[i] = rand()%9;
        std::cout << arr[i] << std::endl;
    }
    for(int i = 0; i < size;++i)
    {
        for(int j = i; j < size; ++j)
        {
            if(arr[i] == arr[j] && arr[j] > 0)
            {
                v.push_back(j);
            }
        }
        if(v.size() > 2)
        {
            for(int k = 0; k < v.size(); ++k)
            {
                arr[v[k]] = -1;
            }
        }
            v.clear();
    }
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << std::endl;
    }
        // if(sum/count == 0)
        // {
            
        // }
}