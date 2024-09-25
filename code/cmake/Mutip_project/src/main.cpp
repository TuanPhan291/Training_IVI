#include "add.h"
#include <bitset>

int main(int argc, char const *argv[])
{
    char a = 0b10000000;

    a = a >> 3;

    std::cout << std::bitset<8>(a) << "\n";

    return 0;
}
