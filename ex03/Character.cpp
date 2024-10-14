/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:19:59 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/14 13:22:35 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

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
	for (int i = 0; i < ARRAY_SIZE; i++)
		if (copy._inventory[i])
			this->_inventory[i] = copy._inventory[i];
	*this = copy;
}

void Character::deleteInvertory() {
	for (int i = 0; i < ARRAY_SIZE; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

Character::~Character() {
	this->deleteInvertory();
}

Character& Character::operator=(const Character &assign) {
	if (this != &assign)
	{
		this->_name = assign.getName();
		for (int i = 0; i < ARRAY_SIZE; i++) {
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (assign._inventory[i])
				this->_inventory[i] = (assign._inventory[i])->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

std::string const & Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < ARRAY_SIZE; i++) {
		if (this->_inventory[i]) {
			this->_inventory[i] = m;
			this->outputMessage("Material equipped !");
			return ;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < ARRAY_SIZE)
	{
		this->_inventory[idx] = NULL;
		this->outputMessage("Material unnequipped");
	}
}

void Character::use(int idx, ICharacter &target) {
	if ((idx >= 0 && idx < ARRAY_SIZE) && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		this->outputMessage("Cannot use the void...");
}