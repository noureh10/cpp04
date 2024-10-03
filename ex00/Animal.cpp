/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:18:33 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/03 19:27:48 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void){
	this->setType(NO_VALUE);
}

Animal::Animal(std::string type) {
	if (!type.empty())
		this->setType(type);
	else
		this->setType(NO_VALUE);
}

Animal::Animal(const Animal &copy) {
	*this = copy;
}

Animal::~Animal(void) {}

Animal& Animal::operator=(const Animal &assign) {
	if (this != &assign) {
		this->setType(assign.getType());
	}
	return (*this);
}

std::string Animal::getType(void) const {
	return (this->_type);
}

void Animal::setType(std::string type) {
	if (!type.empty())
		this->_type = type;
}

void Animal::makeSound(void) const {
	std::cout << NO_NOISE << std::endl;
}