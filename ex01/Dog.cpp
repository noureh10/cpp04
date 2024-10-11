/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:43:40 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/03 19:25:36 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog(void) {
	this->setType("Dog");
}

Dog::~Dog(void) {}

Dog::Dog(const Dog &copy) : Animal(copy) {
	*this = copy;
}

Dog& Dog::operator=(const Dog &assign) {
	if (this != &assign) {
		this->setType(assign.getType());
	}
	return (*this);
}

void Dog::makeSound() const {
	std::cout << DOG_NOISE << std::endl;
}