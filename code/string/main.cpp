#include <iostream>
#include <string.h>

char *Upper_Down(char *str, int n)
{
    // if i = 1 upper, i = 2 downper
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        if (n == 1)
        {
            if (str[i] >= 97 && str[i] <= 122)
            {
                str[i] = str[i] - 32;
            }
        }
        else
        {
            if (str[i] >= 65 && str[i] <= 90)
            {
                str[i] = str[i] + 32;
            }
        }
    }
    return str;
}

int lenght(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}

int char_counter(char *str, char n)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0')
    {
        if (str[i] == n)
        {
            count++;
        }

        i++;
    }

    return count;
}

int main(int argc, char const *argv[])
{
    char name[50] = "My name is Tuan Phan "; // khong khai bao so luong phan tu thi bi tran bo nho

    char age[] = {'i', ' ', 'a', 'm', ' ', '2', '3', '\0'};

    char rf_name[50] = ""; // cai nay cung vay

    std::cout << name << std::endl;

    // std::cout << strlen(name) << std::endl;

    strcpy(rf_name, age);

    strcat(name, age);

    std::cout << name << std::endl;

    char *str_upper = Upper_Down(name, 1);

    std::cout << "Name after Upper is " << str_upper << std::endl;

    char *str_downper = Upper_Down(name, 2);

    std::cout << "Name after Downper is " << str_downper << std::endl;

    std::cout << "Lenght of name is " << lenght(name) << std::endl;

    char str[50];

    std::cout << "Nhap chuoi :";
    std::cin.getline(str, 50);
    
    // std::cout << "Lenght of string input is " << lenght(str) << std::endl;

    int count = char_counter(str, 'e');

    std::cout << "sting counter of string input is " << count << std::endl;

    return 0;
}
