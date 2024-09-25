#include <iostream>

void my_func();

int add(int &a); 

void change_value_of_var_by_add(int* ptr);

int* func_return_add();

int& func_return_ref(int &x);

void swap(int& a, int& b);

void bubble_sort(int* arr, int n, void (*swap)(int& , int&));

void show_arr(int* arr, int n);