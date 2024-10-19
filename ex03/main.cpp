/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:59:27 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/18 19:08:29 by nechaara         ###   ########.fr       */
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
	}
	{
		Character *a = new Character("Bobby");
		Character *b;
		
		
		std::cout << "Before assignment:" << std::endl;
		std::cout << "Address of a: " << &a << ", Name of a: " << a->getName() << std::endl;

    	b = a;  // This invokes the assignment operator

		std::cout << "After assignment:" << std::endl;
		std::cout << "Address of a: " << &a << ", Name of a: " << a->getName() << std::endl;
		std::cout << "Address of b: " << &b << ", Name of b: " << b->getName() << std::endl;
		
		delete a;
		b->getName();
	}
	return 0;

}