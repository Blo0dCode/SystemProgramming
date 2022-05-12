#include <iostream>
#include <list>
using namespace std;

void Find();


class PhoneBook
{
public:
    string name;
    int tel;
    string eMail;

    PhoneBook()
    {
        name = "";
        tel = NULL;
        eMail = "";
    }

    PhoneBook(string cname, int ctel, string ceMail)
    {
        name = cname;
        tel = ctel;
        eMail = ceMail;
    }
    
    void Print_PhoneBook()
    {
        cout << "Name: " << name << "\tTelephone: " << tel << "\teMail: " << eMail << endl;
    }

    
};

void Find(list<PhoneBook> phoneBook, string name, int tel)
{
    for (PhoneBook item : phoneBook)
    {
        if (item.name == name && item.tel == tel)
        {
            item.Print_PhoneBook();
        }
    }
}

void Find(list<PhoneBook> phoneBook, string name)
{
    for (PhoneBook item : phoneBook)
    {
        if (item.name == name)
        {
            item.Print_PhoneBook();
        }
    }
}
void Find(list<PhoneBook> phoneBook, int tel)
{
    for (PhoneBook item : phoneBook)
    {
        if (item.tel == tel)
        {
            item.Print_PhoneBook();
        }
    }
}

int main()
{
    string name1="Vadim";
    int tel1 = 77722222;

    string name2 = "Bob";
    int tel2 = 77744444;

    list<PhoneBook> phoneBook;

    phoneBook.push_back(PhoneBook("Vadim", 77711111, "vadimosipovcng@gmail.com"));
    phoneBook.push_back(PhoneBook("Alex", 77722222, "alex@gmail.com"));
    phoneBook.push_back(PhoneBook("Bob", 77733333, "bob@gmail.com"));
    phoneBook.push_back(PhoneBook("Bob", 77744444, "anotherbob@gmail.com"));

    Find(phoneBook, name1);
    Find(phoneBook, tel1);
    Find(phoneBook, name2, tel2);
}