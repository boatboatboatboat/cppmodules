//
// Created by Djevayo Pattij on 3/11/20.
//

#ifndef BASETRAP_HPP
#define BASETRAP_HPP

#include <string>

class BaseTrap {
public:
    BaseTrap(); // this is stupid
    BaseTrap(BaseTrap const& other);
    BaseTrap& operator=(BaseTrap const& other);
    explicit BaseTrap(std::string const& classname, std::string const& name);
    ~BaseTrap();
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

protected:
    unsigned int _health;
    unsigned int _max_health;
    unsigned int _energy;
    unsigned int _max_energy;
    unsigned int _level;
    std::string _name;
    std::string _classname;
    unsigned int _melee_attack_damage;
    unsigned int _ranged_attack_damage;
    unsigned int _armor_damage_reduction;

private:
};

#endif //BASETRAP_HPP
