#include "func.h"

int main(int argc, char const *argv[])
{
    int a = 15;
    int b = 20;

    add();

    swap(a,b);

    std::cout << "a changed to " << a << ", B changed to " << b << std::endl;

    int arr[] = {3, 80, 61, 27, 8};

    BubleSort(arr,5);

    ShowArr(arr,5);

    //test push
    

    // std::cout << count(arr) << std::endl;

    return 0;
}
