#include <iostream>
#include <vector>


int main()
{
    const int size = 10;
    int array[size];
    std::vector <int> vec;
    int r = 0;
    int l = 0;
    int sum = 0;
    for(int i = 0; i < size; ++i)
    {
        array[i] = rand()%20 + 20;
        std::cout << array[i] << std::endl;
        while(array[i])
        {
            r = array[i]%10;
            array[i] /= 10;
            l = array[i]%10;
            array[i] /= 10;
            sum = abs(r - l);
            vec.push_back(sum);
        }
    }
    for(int i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << std::endl;
    }
}