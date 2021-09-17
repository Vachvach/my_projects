#include <iostream>

int main()
{
    const int s = 16;
    int arr[s];
    int count = 0;
    int sum = 0;
    for(int i =0; i < s; ++i)
    {
        arr[i] = rand()%10 -3;
        std::cout << arr[i] << std::endl;
        if(arr[i]%2 ==0 && arr[i] > 0)
        {
            count++;
            sum += arr[i];
        }
    }
    std::cout << "Drakan tveri gumar = " << sum << std::endl << "Drakan tveri qanak = " << count;
    return 0;
}