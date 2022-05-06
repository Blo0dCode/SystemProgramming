#include <iostream>
using namespace std;
bool is_prime1(unsigned long long value);
bool is_prime2(unsigned long long value);
bool is_prime3(unsigned long long value);

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << "method1 : ";
    if (is_prime1(num))
    {
        cout << "It's a prime number";
    }
    else
    {
        cout << "It's not a prime number";
    }

    cout << endl <<"method2 : ";
    if (is_prime2(num))
    {
        cout << "It's a prime number";
    }
    else
    {
        cout << "It's not a prime number";
    }

    cout << endl << "method3 : ";
    if (is_prime3(num))
    {
        cout << "It's a prime number";
    }
    else
    {
        cout << "It's not a prime number";
    }
}

bool is_prime1(unsigned long long value)
{
    unsigned long long d = 2;
    while (value % d != 0)
    {
        d++;
    }
    return d == value;
}

bool is_prime2(unsigned long long value)
{
    unsigned long long d = 2;
    while (d * d <= value && value % d != 0)
    {
        d++;
    }
    return d * d > value;
}

bool is_prime3(unsigned long long value)
{
    if (value % 2 == 0)
    {
        return value == 2;
    }
    unsigned long long d = 3;
    while (d * d <= value && value % d != 0)
    {
        d += 2;
    }
    return d * d > value;
}
