//
// Created by Djevayo Pattij on 1/12/20.
//

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() { _contact_count = 0; }

Contact& PhoneBook::get_contact_mut(int idx) { return _contacts[idx]; }

bool PhoneBook::add_contact(Contact& contact)
{
    if (_contact_count > 7)
        return false;
    _contacts[_contact_count] = contact;
    _contact_count += 1;
    return true;
}

void PhoneBook::print_contact_list()
{
    for (int idx = 0; idx < _contact_count; idx += 1) {
        get_contact_mut(idx).print_basic_info(idx + 1);
    }
}

bool PhoneBook::is_valid_index(int idx)
{
    return idx >= 0 && idx < _contact_count;
}
