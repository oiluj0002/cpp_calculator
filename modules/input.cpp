#include <iostream>
#include "input.h"

double getValueFromUser()
{
    std::cout << "Enter an number:\n";
    double num{};
    std::cin >> num;

    return num;
};

char getOperationFromUser()
{
    std::cout << "Enter one of the operators below:\n"
              << "[+] Adition\n"
              << "[-] Subtraction\n"
              << "[*] Multiplication\n"
              << "[/] Division\n";
    char op{};
    std::cin >> op;

    return op;
};
