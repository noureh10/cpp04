/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:55:49 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/14 13:36:43 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
}

Brain::Brain(const Brain &other) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain::~Brain() {}

Brain &Brain::operator=(const Brain &other) {
	if (this == &other)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

void Brain::setIdea(std::string idea, int index) {
	this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) const {
	return (this->ideas[index]);
}
