/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:22:56 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/14 13:32:03 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

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
