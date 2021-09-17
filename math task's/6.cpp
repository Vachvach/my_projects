#include <iostream>

int main()
{
    const int size = 20;
    int arr[size];
    int evens = 0;
    int odds = 0;
    for(int i = 0; i < size; i++)
    {
        arr[i] = rand()%10;
        if(arr[i]%2 == 0) evens++;
        else odds++;
    }
    if(evens > odds) std::cout << "A lot off Evens numbers" << evens;
    else if(evens == odds) std::cout << "Are equal to the number of evens and odds";
    else std::cout << "A lot off Odds numbers" << odds;
}