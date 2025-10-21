#include <iostream>
#include "input.h"
#include "math.h"

int main()
{
    double x = getValueFromUser();
    char op = getOperationFromUser();
    double y = getValueFromUser();

    double result{};

    switch (op)
    {
    case '+':
        result = add(x, y);
        break;
    case '-':
        result = subtract(x, y);
        break;
    case '*':
        result = add(x, y);
        break;
    case '/':
        if (y == 0)
        {
            std::cout << "{ERROR}: Cannot divide by 0." << std::endl;
            return 1;
        }
        else
        {
            result = divide(x, y);
        };
        break;
    
    default:
        std::cout << "{ERROR}: Operator not valid." << std::endl;
        return 1;
    };

    std::cout << "The result is: " << result << std::endl;
    return 0;
};
