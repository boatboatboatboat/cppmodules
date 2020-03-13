//
// Created by Djevayo Pattij on 1/12/20.
//

#include <iostream>
#include <sstream>
#include <string>

#include "PhoneBook.hpp"

int main()
{
    std::string current_line;
    PhoneBook phone_book;

    while (true) {
        std::getline(std::cin, current_line);
        if (current_line == "EXIT") {
            break;
        } else if (current_line == "ADD") {
            Contact new_contact;

            std::cout << "enter first name: " << std::endl;
            std::getline(std::cin, current_line);
            new_contact.set_first_name(current_line);
            std::cout << "enter last name: " << std::endl;
            std::getline(std::cin, current_line);
            new_contact.set_last_name(current_line);
            std::cout << "enter nickname: " << std::endl;
            std::getline(std::cin, current_line);
            new_contact.set_nickname(current_line);
            std::cout << "enter login: " << std::endl;
            std::getline(std::cin, current_line);
            new_contact.set_login(current_line);
            std::cout << "enter postal address: " << std::endl;
            std::getline(std::cin, current_line);
            new_contact.set_postal_address(current_line);
            std::cout << "enter phone number: " << std::endl;
            std::getline(std::cin, current_line);
            new_contact.set_phone_number(current_line);
            std::cout << "enter birthday date: " << std::endl;
            std::getline(std::cin, current_line);
            new_contact.set_birthday_date(current_line);
            std::cout << "enter favorite meal: " << std::endl;
            std::getline(std::cin, current_line);
            new_contact.set_favorite_meal(current_line);
            std::cout << "enter underwear color: " << std::endl;
            std::getline(std::cin, current_line);
            new_contact.set_underwear_color(current_line);
            std::cout << "enter darkest secret: " << std::endl;
            std::getline(std::cin, current_line);
            new_contact.set_darkest_secret(current_line);
            if (!phone_book.add_contact(new_contact)) {
                std::cout << "the contact list is full, discarding built contact"
                          << std::endl;
            }
        } else if (current_line == "SEARCH") {
            phone_book.print_contact_list();
            std::cout << "enter index: " << std::endl;
            std::getline(std::cin, current_line);
            int real_index;

            try {
                switch (current_line.at(0)) {
                case '1':
                    real_index = 1;
                    break;
                case '2':
                    real_index = 2;
                    break;
                case '3':
                    real_index = 3;
                    break;
                case '4':
                    real_index = 4;
                    break;
                case '5':
                    real_index = 5;
                    break;
                case '6':
                    real_index = 6;
                    break;
                case '7':
                    real_index = 7;
                    break;
                case '8':
                    real_index = 8;
                    break;
                default:
                    real_index = -1;
                }
            } catch (...) { // lol
                real_index = -1;
            }
            real_index -= 1;
            if (!phone_book.is_valid_index(real_index)) {
                std::cout << "the index is invalid" << std::endl;
                continue;
            }
            phone_book.get_contact_mut(real_index).print_fields();
        }
    }
}
