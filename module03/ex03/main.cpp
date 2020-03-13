//
// Created by Djevayo Pattij on 3/11/20.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
    FragTrap claptrap("Claptrap");

    claptrap.meleeAttack("bruh");
    claptrap.rangedAttack("bruh2");
    claptrap.takeDamage(10);
    claptrap.beRepaired(10);
    claptrap.vaulthunter_dot_exe("bruh3");
    claptrap.vaulthunter_dot_exe("bruh4");
    claptrap.vaulthunter_dot_exe("bruh5");
    claptrap.vaulthunter_dot_exe("bruh6");
    claptrap.vaulthunter_dot_exe("bruh7");

    ScavTrap scavtrap("some scav");

    scavtrap.meleeAttack("bruh");
    scavtrap.rangedAttack("bruh2");
    scavtrap.takeDamage(10);
    scavtrap.beRepaired(10);
    scavtrap.challengeNewcomer();
    scavtrap.challengeNewcomer();
    scavtrap.challengeNewcomer();
    scavtrap.challengeNewcomer();

	ClapTrap actually_claptrap("CL4P-TP", "actually claptrap");
    NinjaTrap ninja("some ninja");

	ninja.ninjaShoebox(ninja);
	ninja.ninjaShoebox(scavtrap);
	ninja.ninjaShoebox(claptrap);
	ninja.ninjaShoebox(actually_claptrap);
}
