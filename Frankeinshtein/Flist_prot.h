#include "Flist.h"
#include <iostream>

template <typename T>
Flist<T>::Flist() : m_head(nullptr), m_tail(nullptr), m_asc(nullptr), m_desc(nullptr), m_size{}
{}

template<typename T>
Flist<T>::~Flist()
{
    while (m_head != m_tail)
    {
        m_head = m_head->next;
        delete m_head->prev;
    }
    delete m_tail;
    m_head = nullptr;
    m_tail = nullptr;
    m_asc = nullptr;
    m_desc = nullptr;
}

template <typename T>
Flist<T>::Flist(const Flist<T>& oth)
{
    node<T>* tcur = this->m_head;
    node<T>* ocur = oth.m_head;
    node<T>* tmp = new node<T>(ocur->data);
    m_head = m_tail = m_asc = m_desc = tmp;
    ocur = ocur ->next;
    while(ocur)
    {
        push_back(ocur->data);
        
        ocur=ocur->next;
    }
}

template<typename T>
void Flist<T>::insert(int pos, int val)
{
    // if(pos < 0 || pos > this->m_size)
    // {
    //     throw std::invalid_argument();
    // }
    if(pos == 0)
    {
        push_front(val);
    }
    else if(pos == size())
    {
        push_back(val);
    }
    else
    {
        int t = pos;
        node<T>* thead = m_head;
        node<T>* tmp = new node<T>(val);
        while(t)
        {
            thead = thead->next;
            --t;
        }
        thead->next->prev = tmp;
        thead->next = tmp;
        tmp = thead->next;

    }
}

template <typename T>
void Flist<T>::push_back(T el)
{
    if(this->m_head == nullptr)
    {
        m_head = new node<T>(el);
        m_tail = m_head;
        m_asc = m_head;
        m_desc = m_head;
    }
    else
    {
        node<T>* tmp = new node<T>(el);
        m_tail->next = tmp;
        tmp->prev = m_tail;
        m_tail = m_tail->next;
        sort(tmp);
    }
    ++m_size;
}

template <typename T>
void Flist<T>::push_front(T el)
{
    if((!m_head))
    {
        m_head = new node<T>(el);
        m_tail = m_head;
        m_desc = m_head;
        m_asc = m_asc;
        ++m_size;
        return;
    }
    node<T>* tmp = new node<T>(el);
    sort(tmp);
    m_head->prev = tmp;
    tmp->next = m_head;
    m_head = tmp;
    
    ++m_size;
}

template <typename T>
void Flist<T>::pop_back()
{
    if(m_head->next == nullptr)
    {
        delete m_head;
        m_head = nullptr;
        m_tail = nullptr;
        m_asc = nullptr;
        m_desc = nullptr;
    }
    m_tail = m_tail->prev;
    delete m_tail->next;
    m_tail->next = nullptr;
    m_desc = m_head;
    m_asc = m_head;
    node<T>* tm = m_head;
    while(tm)
    {
        sort(tm);
        tm = tm->next;
    }
}

template<typename T>
void Flist<T>::sort(node<T>* tmp)
{
    if (tmp->data >= m_desc->data)
    {
        tmp->desc = m_desc;
        m_desc->asc = tmp;
        m_desc = tmp;
        m_desc->asc = nullptr;
        m_asc->desc = nullptr;
        return;
    }
    if (tmp->data < m_asc->data)
    {
        tmp->asc = m_asc;
        m_asc->desc = tmp;
        m_asc = tmp;
        m_asc->desc = nullptr;
        m_desc->asc = nullptr;
        return;
    }
    node<T>* cur = m_asc;
    while(cur->data < tmp->data)
    {
        cur = cur->asc;
        cur->desc->asc = tmp;
        tmp->asc = cur;
        tmp->desc = cur->desc;
        cur->desc = tmp;
    }
}

template <typename T>
int Flist<T>::size()
{
    return m_size;
}

template<typename T>
void Flist<T>::Descending ()
{
    node<T>* t = m_desc;
    while(t)
    {
        std::cout << "|" << t->data << "|";
        t = t->desc;
    }
}

template<typename T>
void Flist<T>::Ascending()
{
    node<T>* t = m_asc;
    while(t)
    {
        std::cout << "|" << t->data << "|";
        t = t->asc;
    }
}

template<typename T>
void Flist<T>::r_print()
{
    node<T>* tmp = m_tail;
    while(tmp)
    {
        std::cout << "|" << tmp->data << "|";
        tmp = tmp->prev;
    }
}

template<typename T>
void Flist<T>::print()
{
    node<T>* tmp= m_head;
    while(tmp)
    {
        std::cout << "|" << tmp->data << "|";
        tmp = tmp->next;
    }
}