/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:52:12 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/18 19:11:34 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	this->setType("Cat");
	this->brain = new Brain();
}

Cat::~Cat(void) {
	delete this->brain;
}

Cat::Cat(const Cat &copy) : Animal(copy) {
	this->_type = copy._type;
	this->brain = new Brain(*copy.brain);
}

Cat& Cat::operator=(const Cat &assign) {
	if (this != &assign) {
		this->setType(assign.getType());
		if (!this->brain)
			delete this->brain;
		this->brain = new Brain(*assign.brain);
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << CAT_NOISE << std::endl;
}

Brain& Cat::getBrain(void) const {
	return (*this->brain);
}

Brain& Cat::getBrain(void) const {
	return (*this->brain);
}

