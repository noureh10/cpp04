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
	*this = copy;
}

Cure::~Cure() {}

Cure& Cure::operator=(const Cure &assign) {
	if (this != &assign)
		this->_type = assign.getType();
	return (*this);
}

AMateria* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}