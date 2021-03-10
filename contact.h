#ifndef UNTITLED_CONTACT_H
#define UNTITLED_CONTACT_H

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Contact {
private:
    string Name;
    string Phone;
    int Age;
public:
    Contact(const string& name, const int& age, const string& phone);
    string name() const {return Name;}
    string phone() const {return Phone;}
    int age() const {return Age;}
    friend ostream &operator<<(ostream& out, const Contact& contact);
};


#endif //UNTITLED_CONTACT_H
