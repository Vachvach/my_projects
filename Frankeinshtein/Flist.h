#ifndef FRANKlist_H
#define FRANKlist_H

template<typename T>
struct node
{
    node(): next(nullptr), prev(nullptr), asc(nullptr), desc(nullptr)
    {}
    node(T data, node<T>* n = nullptr, node<T>* p = nullptr, node<T>* a = nullptr, node<T>* d = nullptr)
    {
        this->data=data;
        this->next=n;
        this->prev=p;
        this->asc=a;
        this->desc=d;
    }
    T data;
    node<T>* next;
    node<T>* prev;
    node<T>* asc;
    node<T>* desc;
    
};

template <typename T>
class Flist 
{
    public:
    Flist();
    Flist(const Flist<T>& oth);
    ~Flist();
    void push_back(T el);
    void push_front(T el);
    void insert(int pos, int val);
    void pop_back();
    void print();
    void Ascending();
    void Descending();
    int size();
    void r_print();
    void sort(node<T>* oth);
    private:
    node<T>* m_head;
    node<T>* m_tail;
    node<T>* m_asc;
    node<T>* m_desc;
    int m_size;
};



#endif