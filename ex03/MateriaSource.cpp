/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:22:56 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/14 18:51:11 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include <ostream>

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < ARRAY_SIZE; i++)
		this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	for (int i = 0; i < ARRAY_SIZE; i++) {
		if (copy._inventory[i])
			this->_inventory[i] = copy._inventory[i];
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < ARRAY_SIZE; i++) {
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &assign) {
	if (this != &assign) {
		for (int i = 0; i < ARRAY_SIZE; i++) {
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (assign._inventory[i])
				this->_inventory[i] = (assign._inventory[i])->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
}

void MateriaSource::outputMessage(std::string message) {
	std::cout << message << std::endl;
}

void MateriaSource::learnMateria(AMateria *material) {
	for (int i = 0; i < ARRAY_SIZE; i++) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = material->clone();
			return ;			
		}
	}
	this->outputMessage("Not enough room to put a new material");
}

AMateria* MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < ARRAY_SIZE; i++) {
		if (this->_inventory[i]->getType() == type)
			return (this->_inventory[i]->clone());
	}
	this->outputMessage("No match found");
	return (NULL);
}