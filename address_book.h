#ifndef UNTITLED_ADDRESS_BOOK_H
#define UNTITLED_ADDRESS_BOOK_H

#pragma once

#include "contact.h"
#include <iostream>
#include <vector>

class AddressBook {
private:
    AddressBook() {}
    ~AddressBook() {}
    vector<Contact> _addressBook;
public:
    AddressBook(const AddressBook&) = delete;
    void operator=(const AddressBook&) = delete;
    static AddressBook &instance();
    int size() const {return _addressBook.size();}
    vector<Contact> get_contacts() {return _addressBook;}
    void sorter(const string &type, const string &order);
    void add(const Contact contact) {_addressBook.push_back(contact);}
};


#endif //UNTITLED_ADDRESS_BOOK_H
