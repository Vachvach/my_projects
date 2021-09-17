#include <iostream>
#include "prot_list.h"
template<typename T>
list<T>::list()
{
    this->count = 0;
    this->root = nullptr;
}

template<typename T>
list<T>::~list()
{
    node<T>* tmp= root;
    while (root != nullptr)
    {
        root = tmp->next;
        delete tmp;
        tmp = root;
    }
}
template<typename T>
void list<T>::push_back(T data)
{
    if(root == nullptr)
    {
        root = new node<T>(data);
    }
    else
    {
        node<T> *current = this->root;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = new node<T>(data);
    }
    ++count;
}

template<typename T>
void list<T>::push_front(T value)
{
    node<T>* tmp = new node<T>(value);
    tmp->next = root;
    root = tmp;
    count++; 

}

template <typename T>
void list<T>::insert(unsigned int pos, const T& value)
{
    if(pos > count)
    {
        return;
    }
    node<T> *tmp = this->root;
    while(pos)
    {
        tmp = tmp->next;
        pos--;
    }
    node<T> *tmp1 =tmp->next;
    tmp->next = new node<T>;
    tmp->next->data = value;
    tmp->next->next = tmp1;
    ++count;
}

template<typename T>
node<T>*& list<T>::get_root(){
    return this->root;
}

template<typename T>
void list<T>::remove(const T& value)
{
    node<T>* cur = root;
    node<T>* prev = root;
    node<T>* tmp;
    while (cur != nullptr)
    {
            if(value == root->data)
            {
                tmp = root;
                cur = cur->next;
                root = cur;
                delete tmp;
                count--;
            }
            else if(value == cur->data)
            {
                tmp = cur;
                cur = cur->next;
                prev->next = cur;
                delete tmp;
                count--;
            }
            else
            {
                prev = cur;
                cur = cur->next;
            }
    }
}
// template<typename T>
// node<T>*list<T>::reverseList(node<T>*& head) 
//     {
        
//         node<T>* tmp =head;
//         if(head ==nullptr)
//         {
//             return head;
//         }
//         if(head->next == nullptr)
//         {
//             return head;
//         }
//         tmp = reverseList(head->next);
//         head->next->next = head;
//         head->next = nullptr;
//         return tmp;
//     }

template<typename T>
void list<T>::print()
{
    node<T>* tmp= root;
    while(tmp)
    {
        std::cout << tmp->data<<"<?";
        tmp = tmp->next;
    }
    
}

