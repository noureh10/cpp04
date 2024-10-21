/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:13:37 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/14 12:15:58 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
	this->_type = "cure";
}

Cure::Cure(const Cure &copy) : AMateria(copy) {
	this->_type = copy._type;
}

Cure::~Cure() {}

Cure& Cure::operator=(const Cure &assign) {
	if (this != &assign)
		this->_type = assign.getType();
	return (*this);
}

AMateria* Cure::clone() const {
	std::cout << "Cloning a Cure element" << std::endl;
	AMateria *value = new Cure(*this);
	return (value);
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}