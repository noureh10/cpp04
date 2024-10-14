/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:43:40 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/13 21:05:40 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog(void) {
	this->setType("Dog");
	this->brain = new Brain();
}

Dog::~Dog(void) {
	delete this->brain;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	this->_type = copy._type;
	this->brain = new Brain(*copy.brain);
}

Dog& Dog::operator=(const Dog &assign) {
	if (this != &assign) {
		this->setType(assign.getType());
		if (!this->brain)
			delete this->brain;
		this->brain = new Brain(*assign.brain);
	}
	return (*this);
}

void Dog::makeSound() const {
	std::cout << DOG_NOISE << std::endl;
}

Brain& Dog::getBrain(void) const {
	return (*this->brain);
}

bool Dog::isEqual(const Dog &obj) {
	return this == &obj;
}