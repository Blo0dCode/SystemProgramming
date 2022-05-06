#include <iostream>
using namespace std;
unsigned long long next_prime();
void reset_prime();

unsigned long long value = 2;

int main()
{
    auto a = next_prime();
    auto b = next_prime();
    reset_prime();
    auto c = next_prime();
    auto d = next_prime();
    auto e = next_prime();

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
}


unsigned long long next_prime()
{
    unsigned long long d = 2;
    while (true)
    {
        while (value % d != 0)
        {
            d++;
        }

        if (d == value)
        {
            value++;
            return d;
        }

        value++;
    }
}

void reset_prime()
{
    value = 2;
}