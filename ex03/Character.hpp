/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:16:18 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/14 13:22:35 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

#define DEFAULT_NAME "Jean-Paul"
#define ARRAY_SIZE 4

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria *_inventory[ARRAY_SIZE];
		void deleteInvertory(void);
		void outputMessage(std::string message);
	public:
		Character(void);
		Character(std::string name);
		Character(const Character &copy);
		~Character();
		Character &operator=(const Character &assign);
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif