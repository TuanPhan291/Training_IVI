#include <iostream>

int main(int argc, char const *argv[])
{
    
    int arr[] = {3 , 2 , 1 , 6};

    int* ptr = arr;

    ptr++;

    std::cout << *ptr + 2 << std::endl;

    *ptr = *ptr + 2;

    std::cout << *ptr << std::endl;

    return 0;
}
