#include <iostream>
#include <string.h>

int main(int argc, char const *argv[])
{
    std::string name = "Phan Nhat Tuan";

    std::string age = "i am 23 year old";

    std::string description_my_self = name + ' ' + age;

    std::cout << "about my self: " << description_my_self << std::endl;

    std::cout << "lenght of the name: " << name.size() << std::endl;

    std::cout << "lenght of the age: " << age.size() << std::endl;

    std::cout << "lenght of the descrption: " << description_my_self.size() << std::endl;

    for (int i = 0; i < description_my_self.size() - 1; i++)
    {
        if(description_my_self[i] == ' '){
            std::cout << "There is the space at column " << i + 1 << std::endl; 
        }   
    }
    

    return 0;
}
