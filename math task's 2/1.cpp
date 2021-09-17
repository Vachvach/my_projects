#include <iostream>

int main()
{
    const int size = 10;
    int arr1[size];
    int arr2[size];
    int arrNew[size];
    for(int i = 0; i < size; ++i)
    {
        arr1[i] = rand()% 30;
        arr2[i] = rand()%40;
        std::cout << arr1[i]  << "arr1"<< std::endl;
        std::cout << arr2[i] << "arr2" << std::endl;
    }
    for(int i = 0, j = 1; i < size; ++i, ++j)
    {
        if(i%2 == 0)
        arrNew[i] = arr1[j];
        else
        arrNew[i] = arr2[j-1];
        std::cout << arrNew[i] << "new" << std::endl;
    }
    return 0;
}