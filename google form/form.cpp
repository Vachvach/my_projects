#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "form.h"
class student;



int main()
{
    admin a;
    student s;
    std::string user_st;
    std::cout << "Enter user" << std::endl;
    std::cin >> user_st;
    
    if(user_st == "admin")
    {
        a.start();
    }
    else if(user_st == "student")
    {
        s.exam();
    }
        

    return 0;
}