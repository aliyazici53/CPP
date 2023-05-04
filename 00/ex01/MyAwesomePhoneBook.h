#ifndef __MYAWESOMEPHONEBOOK_H__
#define __MYAWESOMEPHONEBOOK_H__

#include <iostream>
#include <iomanip>
#include <cmath>
#include "Contact.h"
#include "ContactConsole.h"

class MyAwesomePhoneBook {
public:
    MyAwesomePhoneBook() {
        contacts = new Contact[8];
    }

    void	addContact();
    void	searchContact();
    void    showPrompts(int index, Contact &contact);
    bool    isEmptyPhonebook() const;

private:
    std::size_t size;
    Contact *contacts;
    ContactConsole console;

    void putTable() const;
    void putTableColumns(const ContactConsole &contactConsole, std::size_t i) const;
    std::string checkOutput(const std::string &str) const;
};

#endif