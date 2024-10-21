/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:04:07 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/14 12:14:41 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
	this->_type = "ice";
}

Ice::Ice(const Ice &copy) : AMateria(copy) {
	this->_type = copy._type;
}

Ice::~Ice() {}

Ice& Ice::operator=(const Ice &assign) {
	if (this != &assign)
		this->_type = assign.getType();
	return (*this);
}

AMateria* Ice::clone() const {
	std::cout << "Cloning an Ice element" << std::endl;
	AMateria *value = new Ice(*this);
	return (value);
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bold at " << target.getName() << " *" << std::endl;
}