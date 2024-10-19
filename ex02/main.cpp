/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:10:45 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/18 13:38:21 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void) {
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		delete j;
		delete i;
	}
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		const WrongCat* j = new WrongCat();
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		
		delete meta;
		delete i;
		delete j;
	}
	{
		Cat a;
		a.getBrain().setIdea("Hello World", 0);
		{
			Cat tmp = a;
			std::cout << tmp.getBrain().getIdea(0) << std::endl;
		}
		std::cout << a.getBrain().getIdea(0) << std::endl;
	}
	{
		Dog t1;
		{
			Dog tmp;
			tmp = t1;
		}

		Dog *t2 = new Dog(); 
		{
			Dog *tmp;
			tmp = t2;	
		}
		delete t2;
	}
	{
		Cat *a = new Cat();
		Cat *b = new Cat(*a);
		delete a;
		b->getType();
		b->getBrain();
		delete b;
	}
	{
		// Animal not_allowed;
	}
}