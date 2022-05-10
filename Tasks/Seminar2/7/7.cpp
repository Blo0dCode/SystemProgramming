#include <iostream>
using namespace std;
unsigned long long To_Binary(int n, int k);

const int base = 2;

unsigned long long To_Binary(int n, int k = 0)
{
    if (n==0)
    {
        return k;
    }
    else
    {
        return k += n % base + 10 * To_Binary(n / base, k);
    }
}

int main()
{
    double num, bin;

    cout << "Enter number: ";
    cin >> num;

    bin = To_Binary(num);
    cout << "Binary number of " << num << " is " << bin << endl;
}