#include <iostream>
#include <math.h>

int main()
{
    int n;
    std::cout << "Введите N > ";
    std::cin >> n;

    if (n % 5 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            std::cout << "@";
        }
        std::cout << std::endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            std::cout << "%";
        }
        std::cout << std::endl;
    }
}
