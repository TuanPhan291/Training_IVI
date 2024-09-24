#include <iostream>
#include <string.h>

int my_func()
{
    int x = 1;
    int b = 2;
    return x + b;
}

struct myStruct
{
    myStruct()
    {
        std::cout << "My constructor" << std::endl;
    }
    char name;
    int data;
    myStruct *pS;
}__attribute__((packed));

int main()
{

    int x = 5;
    int у = 6;
    int z = 7;
    int *Ptr = &x;
    myStruct s;
    myStruct *my_pointer = new myStruct();
    my_pointer->name;
    my_pointer->pS;
    myStruct &s2 = *my_pointer;
    s.pS;
    s2.name;
    s2.data;
    std::cout << sizeof(myStruct) << std::endl;
    std::cout << sizeof(s) << std::endl;
    std::cout << sizeof(std::string) << std::endl;
    std::cout << sizeof(int) << std::endl;
    return 0;
}