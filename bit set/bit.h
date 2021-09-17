#ifndef BIT_H
#define BIT_H
#include <iostream>

template<std::size_t bits_size>
class bitset
{

    public:
    bitset()
    {
        this->ptr = new int[size] {0};
    }

    bitset(int n)
    {
        int position = n%(sizeof(int)*8);
        this->ptr = new int[size];
        *ptr = n;
        std::cout << position  << " <-position " << size << "<-size"<< std::endl;
    }

    bitset(const bitset<bits_size>& rhs)
    {
        delete [] this->ptr;
        this->ptr = new int [size];
        this->size = rhs.size;
        for(int i = 0; i < size; ++i)
        {
            this->ptr[i] = rhs.ptr[i];
        }
    }

    ~bitset()
    {
        delete [] ptr;
    }

    bitset& set()
    {
        for(int i = size-1; i >= 0; --i)
        {
            this->ptr[i] = -1;
        }
        return *this;
    }
    
    bitset& set(int pos, bool value = true)
    {
        int index = pos/(sizeof(int)*8);
        int position = pos%(sizeof(int)*8);
        this->ptr[index] |= (1 << position);
        if(value)
        {
            this->ptr[index] |= (value << position);
        }
        else
        {
            this->ptr[index] &= (value << position);
        }
        return *this;
    }

    bitset& reset()
    {
        for(int i = size-1; i >= 0; --i)
        {
            this->ptr[i] = 0;
        }

        
        return *this;
    }

    bitset& reset(int pos)
    {
        int index = pos/(sizeof(int)*8);
        int position = pos%(sizeof(int)*8);
        ptr[index] &= ~(1 << position);
        return *this;
    }
    
    bitset& flip()
    {
        int position = size%(sizeof(int)*8);
        for(int i = size; i >= 0; --i)
        {
            ptr[i] ^= ~(0 << position);
        }
        return *this;
    }
   
    bitset& flip(int pos)
    {
        int index = pos/(sizeof(int)*8);
        int position = (pos)%(sizeof(int)*8);
        int mask = -1;
        mask ^= (1<<position);
        bool x = ptr[index] & (1 << position);
        if(x)
        {
            this->ptr[index] &= mask;
        }
        else
        {
            this->ptr[index] |= (1 << position);
        }

        return *this;
    }

    bool operator[](int pos)
    {
        int index = bits_size/(sizeof(int)*8);
        bool x;
        std::cout << index << "<<<";
        x = ptr[index] & (1 << pos);
        return x;
    }

    bitset<bits_size>& operator&=(const bitset<bits_size>& other)
    {
        for(int i = size-1; i >= 0; --i)
        {
            this->ptr[i] &= other.ptr[i];
        }
        return *this;
    }

    bitset<bits_size>& operator|=(const bitset<bits_size>& other)
    {
        for(int i = size-1; i >= 0; --i)
        {
            this->ptr[i] |= other.ptr[i];
        }
        return *this;
    }

    bitset<bits_size>& operator^=(const bitset<bits_size>& other)
    {
        for(int i = size-1; i >= 0; --i)
        {
            this->ptr[i] ^= other.ptr[i];
        }
        return *this;
    }

    bitset<bits_size> operator~()
    {
        bitset<bits_size> tmp(*this);
        tmp.flip();
        return tmp;
    }

    bitset<bits_size> operator&(const bitset<bits_size>& rhs)
    {
        bitset<bits_size> tmp;
        for(int i = size-1; i >= 0; --i)
        {
            tmp &= this->ptr[i] & rhs.ptr[i];
        }
        return tmp;
    }

    bitset<bits_size> operator|(const bitset<bits_size>& rhs)
    {
        bitset<bits_size> tmp;
        for(int i = size-1; i >= 0; --i)
        {
            tmp |= this->ptr[i] | rhs.ptr[i];
        }
        return tmp;
    }

    bitset<bits_size> operator^(const bitset<bits_size>& rhs)
    {
        bitset<bits_size> tmp;
        for(int i = size-1; i >= 0; --i)
        {
            tmp ^= this->ptr[i] ^ rhs.ptr[i];
        }
        return tmp;
    }

    friend std::ostream& operator<<(std::ostream& os, const bitset<bits_size>& source)
    {
        bool x;
        int index = bits_size/(sizeof(int)*8);
        int position = bits_size%(sizeof(int)*8);
    
        for(int j = source.size -1 ; j >= 0; --j)
        {
            for(int i = 31; i >= 0; --i)
            {
                if((position != 0) && (j== source.size -1) && (position <= i))
                {
                    continue;
                }
                x = (source.ptr[j] & (1 << i));
                os << x;
                os << " ";
                
            }
        }
        return os;
    }

    private:
    int size = (bits_size <= 32) ? 1 :(bits_size%32 != 0) ? (bits_size/32) + 1 : bits_size/32;
    int* ptr = new int [size] {0};
    
};


#endif //