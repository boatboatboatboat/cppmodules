//
// Created by Djevayo Pattij on 3/11/20.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>

class FragTrap {
public:
    FragTrap();
    FragTrap(FragTrap const& other);
    FragTrap& operator=(FragTrap const& other);
    explicit FragTrap(std::string const& name);
    ~FragTrap();
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const& target);

private:
    unsigned int _health;
    unsigned int _max_health;
    unsigned int _energy;
    unsigned int _max_energy;
    unsigned int _level;
    std::string _name;
    unsigned int _melee_attack_damage;
    unsigned int _ranged_attack_damage;
    unsigned int _armor_damage_reduction;
};

#endif //FRAGTRAP_HPP
