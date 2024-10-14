/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:48:32 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/03 19:49:10 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

#define CAT_NOISE "Meow"

class WrongCat: public WrongAnimal {
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(const WrongCat &copy);
		WrongCat& operator=(const WrongCat &assign);
		void makeSound(void) const ;
};

#endif