/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:52:12 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/03 19:25:28 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	this->setType("Cat");
}

Cat::~Cat(void) {}

Cat::Cat(const Cat &copy) : Animal(copy) {
	*this = copy;
}

Cat& Cat::operator=(const Cat &assign) {
	if (this != &assign) {
		this->setType(assign.getType());
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << CAT_NOISE << std::endl;
}