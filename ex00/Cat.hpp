/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:49:45 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/03 19:29:49 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

#define CAT_NOISE "Meow"

class Cat: public Animal {
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &copy);
		Cat& operator=(const Cat &assign);
		void makeSound(void) const ;
};

#endif