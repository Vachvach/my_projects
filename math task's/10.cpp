#include <iostream>

int main()
{
    const int chap = 17;
    int arrr[chap];
    int gumar = 0;
    for(int i = 0; i < chap; ++i)
    {
        arrr[i] = rand()%10 -5;
        std::cout << arrr[i] <<std::endl;
        if(arrr[i] < 0)
        {
            gumar += -arrr[i];
        }
    }
    gumar /= chap;
    std::cout << gumar;
    for(int o = 0; o < chap; ++o)
    {
        if(gumar < arrr[o])gumar+=arrr[o];
    }
    std::cout << "yndhanur gumary = " <<  gumar;
    return 0;
}