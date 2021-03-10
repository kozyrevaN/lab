#include <iostream>
#include <algorithm>
#include <string>
#include "address_book.h"
#include "contact.h"

using namespace std;

int main() {
    string ans = " ";
    AddressBook &addressBook = AddressBook::instance();
    while (ans != "n") {
        cout << "Do you want to add a contact? [y/n]" << endl;
        cin >> ans;
        if (ans == "y") {
            string name, phone;
            int age;
            cout << "Enter name: " << endl;
            cin >> name;
            cout << "Enter age: " << endl;
            cin >> age;
            cout << "Enter phone number: " << endl;
            cin >> phone;
            addressBook.add(Contact(name, age, phone));
            cout << "Successfully added contact" << endl;
        }
    }
    cout << "Select field for sorting [name, age, phone]" << endl;
    string type;
    cin >> type;
    cout << "Select sort order [asc, desc]" << endl;
    string order;
    cin >> order;
    addressBook.sorter(type, order);
    auto tmp = addressBook.get_contacts();
    int k = 1;
    for (auto i : tmp) {
        cout << k << "." << i << endl;
        k++;
    }
    return 0;
}
