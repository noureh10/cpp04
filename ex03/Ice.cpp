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
	*this = copy;
}

Ice::~Ice() {}

Ice& Ice::operator=(const Ice &assign) {
	if (this != &assign)
		this->_type = assign.getType();
	return (*this);
}

AMateria* Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bold at " << target.getName() << " *" << std::endl;
}