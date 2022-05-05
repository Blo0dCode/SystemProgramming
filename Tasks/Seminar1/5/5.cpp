#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int numNumbers;
    cout << "Enter number of numbers: ";
    cin >> numNumbers;
    int* arr = new int[numNumbers];

    for (int i = 0; i < numNumbers; i++)
    {
        cout << "Number " << i + 1 << " > ";
        cin >> arr[i];
    }

    cout << "Numbers: ";
    for (int i = 0; i < numNumbers; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int minNum = arr[0];
    for (int i = 1; i < numNumbers; i++)
    {
        if (minNum % 101 > arr[i] % 101)
        {
            minNum = arr[i];
        }
    }
    cout << "Num with lowest remainder %101 = " << minNum << endl;
}
