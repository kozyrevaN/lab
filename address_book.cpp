#include <algorithm>
#include "address_book.h"

AddressBook &AddressBook::instance() {
    static AddressBook _instance;
    return _instance;
}

bool sort_by_name(const Contact& a, const Contact& b) {
    return a.name() < b.name();
}

bool sort_by_age(const Contact& a, const Contact& b) {
    return a.age() < b.age();
}

bool sort_by_phone(const Contact& a, const Contact& b) {
    return a.phone() < b.phone();
}

void AddressBook::sorter(const string &type, const string &order) {
    if(type == "name") sort(_addressBook.begin(), _addressBook.end(), sort_by_name);
    else if(type == "age") sort(_addressBook.begin(), _addressBook.end(), sort_by_age);
    else if(type == "phone") sort(_addressBook.begin(), _addressBook.end(), sort_by_phone);
    if(order == "desc") reverse(_addressBook.begin(), _addressBook.end());
}