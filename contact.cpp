#include "contact.h"
#include <iostream>

using namespace std;

Contact::Contact(const string& name, const int& age, const string& phone) {
    Name = name;
    Age = age;
    Phone = phone;
}

ostream &operator<<(ostream& out, const Contact& contact) {
    out << contact.Name<< "/" << contact.Age << "/" << contact.Phone << endl;
    return out;
}
