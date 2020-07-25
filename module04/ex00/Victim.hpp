//
// Created by Djevayo Pattij on 3/11/20.
//

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>

class Victim {
public:
    explicit Victim(const std::string& name);
    ~Victim();
    virtual void getPolymorphed() const;
    const std::string& get_name() const;

protected:
    std::string _name;
};

std::ostream& operator<<(std::ostream& os, Victim& self);

#endif //VICTIM_HPP
