/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:46:23 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/03 19:52:43 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void){
	this->setType(NO_VALUE_W);
}

WrongAnimal::WrongAnimal(std::string type) {
	if (!type.empty())
		this->setType(type);
	else
		this->setType(NO_VALUE_W);
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	*this = copy;
}

WrongAnimal::~WrongAnimal(void) {}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &assign) {
	if (this != &assign) {
		this->setType(assign.getType());
	}
	return (*this);
}

std::string WrongAnimal::getType(void) const {
	return (this->_type);
}

void WrongAnimal::setType(std::string type) {
	if (!type.empty())
		this->_type = type;
}

void WrongAnimal::makeSound(void) const {
	std::cout << NO_NOISE_W << std::endl;
}