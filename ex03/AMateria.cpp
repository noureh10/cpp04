/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:52:25 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/14 13:01:52 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("no_material_type") {}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(const AMateria &copy) {
	*this = copy;
}

AMateria::~AMateria() {}

AMateria &AMateria::operator=(const AMateria &assign) {
	if(this != &assign)
		this->_type = assign.getType();
	return (*this);
}

std::string const& AMateria::getType(void) const {
	return (this->_type);
}

void AMateria::use(ICharacter &target) {
	(void) target;
}
