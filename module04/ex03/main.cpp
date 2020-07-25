//
// Created by Djevayo Pattij on 6/2/20.
//

#include "Character.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int other()
{
    IMateriaSource* src = new MateriaSource();
    AMateria *unleaki, *unleakc;

    unleaki = new Ice;
    unleakc = new Cure;
    src->learnMateria(unleaki);
    src->learnMateria(unleakc);

    delete unleaki;
    delete unleakc;

    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    unleaki = tmp;
    me->equip(tmp);
    tmp = src->createMateria("cure");
    std::cout << "tmp mater " << tmp->getType() << std::endl;
    me->equip(tmp);
    unleakc = tmp;
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(5, *bob);
    delete unleaki;
    delete unleakc;
    delete bob;
    delete me;
    delete src;
    return 0;
}

int main()
{
    int x = other();
    system("leaks ex03");
    return x;
}
