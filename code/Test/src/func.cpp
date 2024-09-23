#include "func.h"

void add(){
    std::cout << "This is add function !" << std::endl;
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void ShowArr(int* arr, int n){
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}


void BubleSort(int* arr, int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if(arr[i] < arr[j]){
                swap(arr[i], arr[j]);
            }
        }
        
    }
}
