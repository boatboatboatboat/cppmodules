cmake_minimum_required(VERSION 3.15)
project(cppmodules)

set(CMAKE_CXX_STANDARD 98)

add_executable(cppmodules
        module00/ex00/megaphone.cpp
        module00/ex01/main.cpp
        module00/ex01/PhoneBook.cpp
        module00/ex01/PhoneBook.hpp
        module00/ex01/Contact.hpp
        module00/ex01/Contact.cpp
        module01/ex00/Pony.cpp
        module01/ex00/main.cpp
        module01/ex00/Pony.hpp
        module01/ex01/ex01.cpp
        module01/ex01/memleak.hpp
        module01/ex01/main.cpp
        module01/ex02/Zombie.cpp
        module01/ex02/Zombie.hpp
        module01/ex02/ZombieEvent.cpp
        module01/ex02/ZombieEvent.hpp
        module01/ex02/main.cpp
        module01/ex02/UniqueZombie.hpp
        module01/ex02/UniqueZombie.cpp
        module01/ex03/Zombie.cpp
        module01/ex03/Zombie.hpp
        module01/ex03/main.cpp
        module01/ex07/main.cpp
        module03/ex01/FragTrap.cpp
        module03/ex01/FragTrap.hpp
        module03/ex01/main.cpp
        module01/ex03/ZombieHorde.cpp module01/ex03/ZombieHorde.hpp module01/ex04/ex04.cpp module01/ex05/Brain.cpp module01/ex05/Brain.hpp module01/ex05/Human.cpp module01/ex05/Human.hpp module01/ex06/Weapon.cpp module01/ex06/Weapon.hpp module01/ex06/HumanA.cpp module01/ex06/HumanA.hpp module01/ex06/HumanB.cpp module01/ex06/HumanB.hpp module01/ex06/main.cpp module02/ex00/Fixed.cpp module02/ex00/Fixed.hpp module02/ex00/main.cpp module02/ex01/Fixed.cpp module02/ex01/Fixed.hpp module02/ex01/main.cpp module02/ex02/Fixed.cpp module02/ex02/Fixed.hpp module02/ex02/main.cpp module03/ex00/FragTrap.cpp module03/ex00/FragTrap.hpp module03/ex00/main.cpp module03/ex01/ScavTrap.cpp module03/ex01/ScavTrap.hpp module03/ex01/BaseTrap.cpp module03/ex01/BaseTrap.hpp
        module03/ex02/ClapTrap.cpp
        module03/ex02/ClapTrap.hpp
        module03/ex02/FragTrap.cpp
        module03/ex02/FragTrap.hpp
        module03/ex02/ScavTrap.cpp
        module03/ex02/ScavTrap.hpp
        module03/ex02/main.cpp
        module03/ex03/ClapTrap.cpp
        module03/ex03/ClapTrap.hpp
        module03/ex03/FragTrap.cpp
        module03/ex03/FragTrap.hpp
        module03/ex03/ScavTrap.cpp
        module03/ex03/ScavTrap.hpp
        module03/ex03/main.cpp
        module03/ex03/NinjaTrap.cpp
        module03/ex03/NinjaTrap.hpp
        module03/ex04/ClapTrap.cpp
        module03/ex04/ClapTrap.hpp
        module03/ex04/FragTrap.cpp
        module03/ex04/FragTrap.hpp
        module03/ex04/ScavTrap.cpp
        module03/ex04/ScavTrap.hpp
        module03/ex04/main.cpp
        module03/ex04/NinjaTrap.cpp
        module03/ex04/NinjaTrap.hpp
        module03/ex04/SuperTrap.cpp module03/ex04/SuperTrap.hpp module04/ex00/Sorcerer.cpp module04/ex00/Sorcerer.hpp module04/ex00/Victim.cpp module04/ex00/Victim.hpp module04/ex00/Peon.cpp module04/ex00/Peon.hpp module04/ex00/main.cpp module04/ex01/AWeapon.cpp module04/ex01/AWeapon.hpp module04/ex01/PlasmaRifle.cpp module04/ex01/PlasmaRifle.hpp module04/ex01/PowerFist.cpp module04/ex01/PowerFist.hpp module04/ex01/Enemy.cpp module04/ex01/Enemy.hpp module04/ex01/SuperMutant.cpp module04/ex01/SuperMutant.hpp)