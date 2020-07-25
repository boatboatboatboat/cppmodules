//
// Created by Djevayo Pattij on 3/11/20.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
public:
    ClapTrap();
    ClapTrap(ClapTrap const& other);
    ClapTrap& operator=(ClapTrap const& other);
    explicit ClapTrap(std::string const& classname, std::string const& name);
    ~ClapTrap();
    virtual void rangedAttack(std::string const& target);
    virtual void meleeAttack(std::string const& target);
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

#endif //CLAPTRAP_HPP
