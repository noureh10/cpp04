/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:03:02 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/14 13:22:04 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>
#define ARRAY_SIZE 4

class MateriaSource: public IMateriaSource {
	private:
		AMateria *_inventory[ARRAY_SIZE];
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &copy);
		~MateriaSource(void);
		MateriaSource& operator=(MateriaSource const &assign);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const &type);
};

#endif