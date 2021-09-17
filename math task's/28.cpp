#include <iostream>

int main()
{
    const int ch = 18;
    int arr[ch];
    int count = 0;
    int arif = 0;
    int sum = 0;
    for(int i = 0; i < ch; ++i)
    {
        arr[i] = rand()%30;
        if(abs(arr[i]) > 0)
        {
            
            arif += arr[i];
        }
    }
    for(int j = 0; j < ch; ++j)
    {
        if(abs(arr[j]) > arif)
        {
            sum+=arr[j];
            count++;
        }
    }
    return 0;
}