//
// Created by Djevayo Pattij on 1/12/20.
//

#ifndef CPPMODULES_CONTACT_HPP
#define CPPMODULES_CONTACT_HPP

#include <string>

class Contact {
public:
    /// Sets the first name field
    void set_first_name(std::string& name);
    /// Sets the last name field
    void set_last_name(std::string& name);
    /// Sets the nickname field
    void set_nickname(std::string& name);
    /// Sets the login field
    void set_login(std::string& login);
    /// Sets the postal address
    void set_postal_address(std::string& postal_address);
    /// Sets the phone number
    void set_phone_number(std::string& number);
    /// Sets the birthday date field
    void set_birthday_date(std::string& date);
    /// Sets the favorite meal
    void set_favorite_meal(std::string& meal);
    /// Sets the underwear color
    void set_underwear_color(std::string& color);
    /// Sets the darkest secret
    void set_darkest_secret(std::string& secret);
    /// Print the index, first name, last name and nickname,
    /// seperated in columns of width 10,
    /// with the column seperator being the character `|`,
    /// with each field being right-aligned,
    /// and truncated if its length is greater than 10.
    /// If the field is truncated, the last display character is set to `.`
    void print_basic_info(int index);
    /// Print all the fields of the contact,
    /// in the order defined by the header file.
    void print_fields();

private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _login;
    std::string _postal_address;
    std::string _phone_number;
    std::string _birthday_date;
    std::string _favorite_meal;
    std::string _underwear_color;
    std::string _darkest_secret;
};

#endif // CPPMODULES_CONTACT_HPP
