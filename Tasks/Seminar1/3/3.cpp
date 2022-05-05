#include <iostream>
#include <math.h>

int main()
{
    double x, y, result1, result2;
    std::cout << "Enter x > ";
    std::cin >> x;
    std::cout << "Enter y > ";
    std::cin >> y;
    std::cout << std::endl;
    result1 = x;

    for (int i = 1; i < y; i++)
    {
        result1 *= x;
    }

    result2 = pow(x, y);

    std::cout << "(for)x^y = " << result1 << std::endl;
    std::cout << "(class math)x^y = " << result2 << std::endl;
}
