#include <iostream>
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

    int count = NULL, max = NULL;
    for (int i = 0; i < numNumbers; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            count++;
        }
        else
        {
            if (max < count)
                max = count;
            count = 0;
        }
    }
    cout << "Max in a row numbers: " << max + 1 << endl;
}