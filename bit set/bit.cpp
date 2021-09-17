#include <iostream>
#include "bit.h"

int main()
{
    bitset <35> a(20);
    bitset<35> b(22);
    a.set(30);
    b.set(30);
    a.flip(28);
    b.flip(28);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << (a ^ b);
    return 0;
}