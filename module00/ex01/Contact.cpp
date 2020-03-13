//
// Created by Djevayo Pattij on 1/12/20.
//

#include "Contact.hpp"

#include <iomanip>
#include <iostream>

void Contact::set_first_name(std::string& name) { _first_name = name; }

void Contact::set_last_name(std::string& name) { _last_name = name; }

void Contact::set_nickname(std::string& name) { _nickname = name; }

void Contact::set_login(std::string& login) { _login = login; }

void Contact::set_postal_address(std::string& postal_address)
{
    _postal_address = postal_address;
}

void Contact::set_phone_number(std::string& number) { _phone_number = number; }

void Contact::set_birthday_date(std::string& date) { _birthday_date = date; }

void Contact::set_favorite_meal(std::string& meal) { _favorite_meal = meal; }

void Contact::set_underwear_color(std::string& color)
{
    _underwear_color = color;
}

void Contact::set_darkest_secret(std::string& secret)
{
    _darkest_secret = secret;
}

void Contact::print_basic_info(int index)
{
    std::cout << std::setw(10) << index << '|';
    if (_first_name.length() > 10) {
        std::cout << _first_name.substr(0, 9) << '.';
    } else {
        std::cout << std::setw(10) << _first_name;
    }
    std::cout << '|';
    if (_last_name.length() > 10) {
        std::cout << _last_name.substr(0, 9) << '.';
    } else {
        std::cout << std::setw(10) << _last_name;
    }
    std::cout << '|';
    if (_nickname.length() > 10) {
        std::cout << _nickname.substr(0, 9) << '.';
    } else {
        std::cout << std::setw(10) << _nickname;
    }
    std::cout << std::endl;
}

void Contact::print_fields()
{
    std::cout << _first_name << std::endl
              << _last_name << std::endl
              << _nickname << std::endl
              << _login << std::endl
              << _postal_address << std::endl
              << _phone_number << std::endl
              << _birthday_date << std::endl
              << _favorite_meal << std::endl
              << _underwear_color << std::endl
              << _darkest_secret << std::endl;
}
