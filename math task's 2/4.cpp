#include <iostream>

int main()
{
    const int size1 = 9;
    const int size2 = 7;
    int arr1[size1];
    int arr2[size2];
    int arrN[size1+size2];
    for(int i = 0; i < size1; ++i)
    {
        arr1[i] = rand()%30;
        arrN[i] = arr1[i];
    }
    for(int i = size1-1, j = 0; i < size1 + size2; ++i, ++j)
    {
        arr2[j] = rand()%32;
        arrN[i] = arr2[j];
    }
     
    int key = 0;
    int i = 0;
    for(int j = 1; j < size1+size2; ++j)
    {
        key = arrN[j];
        i = j-1;
        while(i >= 0 && arrN[i] > key)
        {
            arrN[i+1] = arrN[i];
            i--;
        }
        arrN[i+1] = key;
    }
    for(int j = 0; j < size1+size2; ++j)
    {
    std::cout<<arrN[j]<< "N" << j <<std::endl;
    }
}