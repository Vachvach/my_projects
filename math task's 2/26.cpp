#include <iostream>
#include <vector>
int main()
{
    const int size = 12;
    int arr1[size];
    int arr2[size];
    std::vector<int> vec;
    for(int i = 0; i < size; ++i)
    {
        arr1[i] = rand()%40+2;
        arr2[i] = rand()%20+12;
        std::cout << arr1[i] << " |1|" << std::endl;
        std::cout << arr2[i] << " |2|" << std::endl;
    }
    for(int i = 0; i < size; ++i)
    {
        for(int j = i; j < size; ++j)
        {
            if(arr1[i] == arr2[j])
            {
               vec.push_back(j);
            }
        }
    }
    for(int k = 0; k < vec.size();++k)
    {
        arr1[vec[k]] = 0;
    }
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr1[i] << " |1|" << std::endl;
    }

    return 0;
}