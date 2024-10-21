/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:59:27 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/21 18:59:07 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	{
		IMateriaSource* src = new MateriaSource();
		AMateria* tmp;
		ICharacter* me = new Character("me");
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		//No match found
		tmp = src->createMateria("cure");
		me->equip(tmp);
		//Match found - No output
		tmp = src->createMateria("ice");
		me->equip(tmp);
		me->unequip(0);
		me->unequip(1);
		me->unequip(410065408);
		me->unequip(-200);
		delete src;
		delete tmp;
		delete me;
	}
	{
		IMateriaSource* src = new MateriaSource();
		AMateria* tmp;
		ICharacter* me = new Character("me");
		//No match found
		tmp = src->createMateria("cure");
		me->equip(tmp);
		//No Match found either
		tmp = src->createMateria("ice");
		me->equip(tmp);
		me->unequip(0);
		me->unequip(1);
		me->unequip(410065408);
		me->unequip(-200);
		delete src;
		delete me;
	}
	{
		Character *a = new Character("Bobby");
		Character *b = new Character("Eric");
		
		std::cout << "Before assignment:" << std::endl;
		std::cout << "Address of a: " << &a << ", Name of a: " << a->getName() << std::endl;

    	*b = *a;

		std::cout << "After assignment:" << std::endl;
		std::cout << "Address of a: " << &a << ", Name of a: " << a->getName() << std::endl;
		std::cout << "Address of b: " << &b << ", Name of b: " << b->getName() << std::endl;
		
		delete a;
		b->getName();
		delete b;
	}
	{
		Character *a = new Character("Bobby isn't angry");
		Character *b = new Character(*a);
		delete a;
		std::cout << b->getName() << std::endl;
		delete b;
	}
	return 0;

}