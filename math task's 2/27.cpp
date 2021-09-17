#include <iostream>

int main()
{
    const int size = 10;
    int arr[size];
    int bajin = 0;
    int count = 0;
    for(int i = 0; i < size; ++i)
    {
        arr[i] = rand()%100;
        std::cout << arr[i] << std::endl;
    }
        for(int j = 0, i = 1; j < size || i < size;)
        {
            if(arr[j] < arr[i])
            {
                int tmp = i;
                i = ++j;
                j = tmp;
                i++;
                count++;
            }
            else 
            {
                j = i;
                i++;
                if(count >= 1)
                {
                    bajin++;
                    count = 0;
                }
            }
            
        }
        std::cout << bajin;
    
}