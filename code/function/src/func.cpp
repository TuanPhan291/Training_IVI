#include "func.h"

void my_func()
{
    std::cout << "this is my function" << std::endl;
}

int add(int &a)
{
    a = a + 1;
    return a;
}

void change_value_of_var_by_add(int *ptr)
{
    *ptr = 40;
    std::cout << "value of ptr change to " << *ptr << std::endl;
}

int *func_return_add()
{

    int *x = new int(5);

    return x;
}

int &func_return_ref(int &x)
{
    x = x + 1;
    return x;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubble_sort(int *arr, int n, void (*swap)(int &, int &))
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {                             
                swap(arr[j], arr[j + 1]); 
            }
        }
    }
}

void show_arr(int *arr, int n)
{
    std::cout << "Value of arr is: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << "\n";
}
