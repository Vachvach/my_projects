#include <iostream>

template <typename T>
class smart_pointer
{
    public:

    smart_pointer(T* cuc) : ptr{cuc}
    {}

    ~smart_pointer()
    {
        delete ptr;
    }

    T& operator*()
    {
        return *ptr;
    }
    T* operator->()
    {
        return ptr;
    }
    private:
    T* ptr;
};