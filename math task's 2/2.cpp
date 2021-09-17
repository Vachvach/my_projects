#include <iostream>


int main()
{
    const int lenght = 8;
    int arr[lenght];
    int answ[lenght];
    for(int i = 0; i < lenght; ++i)
    {
        arr[i] = rand()% 30;
        std::cout << arr[i] <<std::endl;
        answ[i] = arr[i]%10;
        std::cout << answ[i] <<std::endl;
    }
    return 0;
}