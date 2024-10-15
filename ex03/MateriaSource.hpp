/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:03:02 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/14 19:18:24 by nechaara         ###   ########.fr       */
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
		void outputMessage(std::string message);
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &copy);
		~MateriaSource(void);
		MateriaSource& operator=(const MateriaSource &assign);
		void learnMateria(AMateria*);
		AMateria* createMateria(const std::string &type);
};

#endif