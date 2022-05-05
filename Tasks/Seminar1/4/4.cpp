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
        if (minNum > arr[i])
        {
            minNum = arr[i];
        }
    }
    cout << "Min num = " << minNum;
}
