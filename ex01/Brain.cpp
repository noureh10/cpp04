/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:55:49 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/18 13:35:09 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
	outputMessage("Creating a brain filled with no ideas");
}

Brain::Brain(const Brain &other) {
	*this = other;
	outputMessage("Copying a brain from another brain");
}

Brain::~Brain() {
	outputMessage("Destructing the brain (watching tiktoks)");
}

Brain &Brain::operator=(const Brain &other) {
	if (this != &other) {
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];	
	}
	return (*this);
}

void Brain::outputMessage(std::string message) {
	std::cout << message << std::endl;
}

void Brain::setIdea(const std::string idea, unsigned int index) {
	if (index <= NUMBER_OF_IDEAS)
		this->ideas[index] = idea;
}
const std::string Brain::getIdea(unsigned int index) const {
	if (index <= NUMBER_OF_IDEAS)
		return (this->ideas[index]);
	return "";
}
