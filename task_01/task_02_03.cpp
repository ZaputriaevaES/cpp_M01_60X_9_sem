//====================================================================================================
// compile command: g++-14 -std=c++23 task_02_03.cpp -o task_02_03
// compile command: g++-14 -std=c++23 -Wpedantic task_02_03.cpp -o task_02_03
// run command: ./task_02_03
//====================================================================================================

#include <iostream>
#include <print>

int main()
{
    char symbol_to_classify;

    std::print("Enter a character to classify: ");
    std::cin >> symbol_to_classify;

    switch (symbol_to_classify)
    {
        case 'A' ... 'Z':
            std::print("This is uppercase letter\n");
            break;
        case 'a' ... 'z':
            std::print("This is lowercase letter\n");
            break;
        case '0' ... '9':
            std::print("This is decimal digit\n");
            break;
        case '!' ... '/':
        case ':' ... '@':
        case '[' ... '`':
        case '{' ... '~':
            std::print("This is punctuation mark / mathematical symbol\n");
            break;
        default:
            std::print("This is some other symbol\n");
            break;
    }

    return 0;
}