/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara.student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:50:05 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/17 15:38:35 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat(void) {
	this->setType("Wrong Cat");
}

WrongCat::~WrongCat(void) {}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy) {
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat &assign) {
	if (this != &assign) {
		this->setType(assign.getType());
	}
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << CAT_NOISE_W << std::endl;
}