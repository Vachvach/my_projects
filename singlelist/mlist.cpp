#include <iostream>
#include "singleList.h"




int main()
{
    list <int> a;
    a.push_back(10);
    a.push_back(8);
    a.push_back(7);
    a.print();
}

// while (tcount--)
    // {
    //     if(cur != nullptr)
    //     {
    //         if(value == root->data)
    //         {
    //             cur = cur->next;
    //             root = cur;
    //             delete cur;
    //             tcount--;
    //         }
    //         else if(value == cur->data)
    //         {
    //             prev = cur;
    //             cur = prev->next;
    //             delete prev;
    //             tcount--;
    //             cur = cur->next;
    //         }
    //         else
    //         cur = cur->next;
    //     }
        
    // }