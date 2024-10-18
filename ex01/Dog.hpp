/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:39:23 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/18 19:12:24 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

#define DOG_NOISE "Waf"

class Dog: public Animal {
	private:
		Brain *brain;
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &copy);
		Dog& operator=(const Dog &assign);
		void makeSound(void) const;
		Brain& getBrain(void) const;
		bool isEqual(const Dog &obj);
};

#endif