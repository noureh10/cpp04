/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:19:59 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/21 18:50:34 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <ostream>

Character::Character(void) {
	Character(DEFAULT_NAME);
}

Character::Character(std::string name) {
	if (!name.empty())
		this->_name = name;
	else
		this->_name = DEFAULT_NAME;
	for (int i = 0; i < ARRAY_SIZE; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &copy) {
	std::cout << "Character copy construtor called" << std::endl;
	this->_name = copy._name;
	for (int i = 0; i < 4; i++) {
		if (copy._inventory[i]) {
			this->_inventory[i] = copy._inventory[i]->clone();
		} else {	
			this->_inventory[i] = NULL;
		}
	}
}

Character::~Character() {
	for (int i = 0; i < ARRAY_SIZE; i++)
		delete this->_inventory[i];
}

void Character::outputMessage(std::string message) {
	std::cout << message << std::endl;
}

Character& Character::operator=(const Character &assign) {
	if (this != &assign)
	{
		for (int i = 0; i < 4; ++i) {
            if (this->_inventory[i])
				delete _inventory[i];

        }
		this->_name = assign._name;
		for (int i = 0; i < ARRAY_SIZE; i++) {
			if (assign._inventory[i]) {
				this->_inventory[i] = assign._inventory[i]->clone();
			} else {	
				this->_inventory[i] = NULL;
			}
		}
	}
	return (*this);
}

std::string const & Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria *m) {
	if (!m) {
		outputMessage("No material to equip");
		return ;
	}
	for (int i = 0; i < ARRAY_SIZE; i++) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
			outputMessage("Material equipped !");
			return ;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < ARRAY_SIZE && this->_inventory[idx])
	{
		this->_inventory[idx] = NULL;
		outputMessage("Material unnequipped");
		return ;
	}
	outputMessage("Nothing there !");
}

void Character::use(int idx, ICharacter &target) {
	if ((idx >= 0 || idx < ARRAY_SIZE) && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		outputMessage("Cannot use the void...");
}