/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:12:40 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/03 19:33:07 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#define NO_VALUE "Default Animal"
#define NO_NOISE "Default Animal Noise"

class Animal {
	protected:
		std::string _type;
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &copy);
		virtual ~Animal(void);
		Animal& operator=(const Animal &assign);
		std::string getType(void) const;
		void setType(std::string type);
		virtual void makeSound(void) const;
};

#endif