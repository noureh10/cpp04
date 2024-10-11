/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:20:58 by nechaara          #+#    #+#             */
/*   Updated: 2024/10/07 19:24:41 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain{
	private:
		std::string ideas[100];
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain &copy);
		Brain& operator=(const Brain &assign);
		std::string getIdeas(int index) const;
		void setIdeas(int index, std::string message);
};

#endif