//
// Created by Djevayo Pattij on 1/12/20.
//

#ifndef CPPMODULES_PHONEBOOK_HPP
#define CPPMODULES_PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
public:
    PhoneBook();
    bool add_contact(Contact& contact);
    Contact& get_contact_mut(int idx);
    void print_contact_list();
    bool is_valid_index(int idx);

private:
    Contact _contacts[8];
    int _contact_count;
};

#endif // CPPMODULES_PHONEBOOK_HPP
