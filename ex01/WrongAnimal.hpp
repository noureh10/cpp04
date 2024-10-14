/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:45:09 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/03 19:52:26 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

#define NO_VALUE_W "Default Wrong Animal"
#define NO_NOISE_W "Default Wrong Animal Noise"

class WrongAnimal {
	protected:
		std::string _type;
	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &copy);
		~WrongAnimal(void);
		WrongAnimal& operator=(const WrongAnimal &assign);
		std::string getType(void) const;
		void setType(std::string type);
		void makeSound(void) const;
};

#endif