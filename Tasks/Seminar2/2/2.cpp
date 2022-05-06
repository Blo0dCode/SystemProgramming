#include <iostream>
using namespace std;
unsigned long long read_int_value(string value);
unsigned long long to_unsigned_long_long(string str);

int main()
{
    string cWord;
    unsigned long long newWord;

    std::cout << "Enter word: ";
    cin >> cWord;

    newWord = read_int_value(cWord);
    cout << "New word: " << newWord;
}

unsigned long long read_int_value(string value)
{   
    string sNewWord = "";
    unsigned long long newWord;
    for(char ch : value)
    {
        if (isdigit(ch))
        {
            sNewWord += ch;
        }
    }
    newWord = to_unsigned_long_long(sNewWord); // error ???

    return newWord;
}

unsigned long long to_unsigned_long_long(string str)
{
    unsigned long long newStr;
    for (int i = 0; i < sizeof(str); i++)
    {
        newStr = (unsigned long long)str[i] - (unsigned long long)'0';
    }
    return newStr;
}
