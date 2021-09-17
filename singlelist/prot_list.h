#ifndef SINGLELIST_H
#define SINGLELIST_H
template<typename T>
struct node
{
    node<T>* next;
    T data;
    node(T data = T(), node<T>*ptr = nullptr)
    {
        this->data = data;
        this->next = ptr;
    }
};

template<typename T>
class list
{
public:
    list();
    ~list();
    void push_back(T);
    void insert(unsigned int pos, const T& value);
    void print();
    node<T>*& get_root();
    void remove(const T& value);
    void push_front(T value);
    // node<T>* reverseList(node<T>*&head = nullptr);
private:
    int count;
    node<T>* root;
    
};
#endif