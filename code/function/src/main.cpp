#include "func.h"

void func1(int a);

int func_return(){
    return 5;
}

int main(int argc, char const *argv[])
{
    // my_func();

    int a = 4;

    // func is the parameter

    func1(func_return());

    // func with reference

    std::cout << "the value of func that returned : " << add(a) << std::endl;

    std::cout << "the value of a is : " << a << std::endl;

    // func which has the address is the parameter

    int* ptr = &a;

    change_value_of_var_by_add(ptr);

    std::cout << "the value of a is after change by address: " << a << std::endl;

    int* re_ptr = func_return_add();

    std::cout << "an address of value is: " << *func_return_add() << std::endl;

    std::cout << "an address of re_ptr is: " << *re_ptr << std::endl;

    delete re_ptr;

    int var = 3;

    int &ref = func_return_ref(var);

    std::cout << "ref has been returned is: " << ref << std::endl;

    std::cout << "value of var after using func is: " << var << std::endl;

    ref++;

    std::cout << "value of var after ref++ is: " << var << std::endl;

    std::cout << "address of swap is " << &swap << "\n";

    // void (*ptr_swap_func)(int& , int&) = swap;

    int x = 5, y = 6;

    // ptr_swap_func(x,y);

    // std::cout << " x swap to y is: x = " << x << ", y = " << y << "\n"; 

    int arr[5] = {3 , 7 , 2 , 10 , 1};

    show_arr(arr, 5);

    bubble_sort(arr, 5, swap);

    void (*show_arr_ptr)(int* , int) = show_arr; 

    show_arr_ptr(arr, 5);

    return 0;
}

void func1(int a){
    std::cout << "this is value that the func_return returned: " << a << std::endl;
}