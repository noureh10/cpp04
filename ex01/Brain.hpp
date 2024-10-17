/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara.student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:53:57 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/17 16:28:27 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#define NUMBER_OF_IDEAS 100

class Brain
{
	private:
		std::string ideas[NUMBER_OF_IDEAS];
	public:
		Brain();
		Brain(const Brain &other);
		~Brain();
		Brain &operator=(const Brain &other);
		void setIdea(const std::string idea, unsigned int index);
		const std::string getIdea(unsigned int index) const;	
};

#endif