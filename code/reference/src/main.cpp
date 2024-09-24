#include "func.h"

struct my_struct
{
    my_struct(int &z) : z(z)
    {
        std::cout << "this is contructor" << std::endl;
    };

    int &z;

    int x = 0;
    int y = 0;
};

void my_func1(const my_struct &st)
{
    std::cout << "address of st input is " << &st << std::endl;

    std::cout << "my_func1 " << st.x << std::endl;
    // st.x = 50;
}

int &my_func2()
{
    static int x = 10;
    std::cout << "address of x is " << &x << std::endl;
    return x;
}

int main(int argc, char const *argv[])
{
    int var;

    my_struct st(var);

    my_struct &rfst = st;

    my_struct *ptr = nullptr; // NULL

    std::cout << "value of ptr is " << ptr << std::endl;

    std::cout << "address of st is " << &st << std::endl;

    st.x = 100;

    std::cout << "temp is " << st.z << std::endl;

    my_func1(st);
    int &b = my_func2();

    std::cout << "value of b is " << b << std::endl;
    std::cout << "address of b is " << &b << std::endl;

    std::cout << "st.x is " << st.x << std::endl;
    return 0;
}
