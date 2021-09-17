#include <iostream>

int main()
{
    const int size = 12;
    double arr[size];
    int count = 0;
    for(int i =0; i < size; ++i)
    {
        arr[i] = rand()%123 + 10.14;
        std::cout << arr[i] << std::endl;
    }
    double key = 0;
    int i = 0;
    for(int j = 1; j < size; ++j)
    {
        key = arr[j];
        i = j-1;
        while(i >= 0 && key > arr[i])
        {
            arr[i+1] = arr[i];
            i--;
            count++;
        }
        arr[i+1] = key;
        
    }
    for(int i = 0; i < size; ++i)
    {
        std::cout << " Changes have been made = " << count << std::endl;
    }
}