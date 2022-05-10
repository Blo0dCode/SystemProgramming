#include <iostream>
using namespace std;
unsigned long long factorial(int i);

int main()
{
    double num, fact;

    cout << "Enter number(0-20): ";
    cin >> num;

    while (num < 0 || num >= 20)
    {
        cout << "Enter another number(0-20): ";
        cin >> num;
    }

    fact = factorial(num);
    cout << "Factorial of " << num << " is " << fact << endl;
}

unsigned long long factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }

}