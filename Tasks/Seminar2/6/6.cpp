#include <iostream>
using namespace std;
unsigned long long Fib(int n);

unsigned long long Fib(int n)
{
	if (n < 1) return 0;
	if (n == 1) return 1;
	return Fib(n - 1) + Fib(n - 2);
}

int main()
{
    double num, fib;

    cout << "Enter number(0-50): ";
    cin >> num;

    while (num < 0 || num >= 20)
    {
        cout << "Enter another number(0-50): ";
        cin >> num;
    }

    fib = Fib(num);
    cout << "Fibnacci number of " << num << " is " << fib << endl;
}