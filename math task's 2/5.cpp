#include <iostream>
#include <vector>

int main()
{
    const int size = 6;
    int X[size]{4,2,2,3,3,3};
    int Y[size]{4,2,2,2,3,3};
    std::vector<int> S;
    bool answer = false;
    /*for(int i = 0; i < size; ++i)
    {
        X[i] = rand()%40;
        Y[i] = rand()%71;
    }*/
    int key = 0;
    int i = 0;
    for(int j = 1; j < size; ++j)
    {
        key = X[j];
        i = j-1;
        while(i >= 0 && key < X[i])
        {
            X[i+1] = X[i];
            i--;
        }
        X[i+1] = key;
        
    }
    for(int j = 1; j < size; ++j)
    {
        key = Y[j];
        i = j-1;
        while(i >= 0 && key < Y[i])
        {
            Y[i+1] = Y[i];
            i--;
        }
        Y[i+1] = key;
        
    }
    for(int i = 0, j = 0; i < size;)
    {
        if(X[i] == Y[j])
        {
            S.push_back(X[i]);
            i++;
            j++;
        }
        else if(X[i] > Y[j])
        {
            j++;
        }
        else if(X[i] < Y[j])
        {
            ++i;
        }
    }

    for(int i = 0; i < size; ++i)
    {
        std::cout << X[i] << "X" << std::endl;
         std::cout <<Y[i] << "Y" << std::endl;
    }
     for(int i = 0; i < S.size(); ++i)
     {
         std::cout << S[i] << std::endl;
     }
    return 0;
}