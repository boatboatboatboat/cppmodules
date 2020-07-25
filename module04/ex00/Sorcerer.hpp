//
// Created by Djevayo Pattij on 3/11/20.
//

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Victim.hpp"
#include <string>

class Sorcerer {
public:
    Sorcerer(); // this is stupid
    Sorcerer(const Sorcerer& other); // this is stupid
    Sorcerer& operator=(const Sorcerer& other); // this is stupid
    Sorcerer(const std::string& name, const std::string& title);
    ~Sorcerer();
    void polymorph(Victim const& victim) const;
    const std::string& get_name() const;
    const std::string& get_title() const;

private:
    std::string _name;
    std::string _title;
};

std::ostream& operator<<(std::ostream& os, Sorcerer& self);

#endif //SORCERER_HPP
