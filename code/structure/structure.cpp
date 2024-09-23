#include <iostream>

struct my_struct{

    my_struct(){};

    int a;
    char b;
    double c;

    void show(){
        std:: cout << "a = " << this->a << ", b = " << this->b << ", c = " << this->c << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    my_struct my_st;

    my_st.a = 5;
    my_st.b = 'c';
    my_st.c = 3.4;

    my_st.show();

    // std::cout << sizeof(my_struct) << std::endl;
    return 0;
}
