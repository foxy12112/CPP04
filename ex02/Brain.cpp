/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 04:42:49 by ldick             #+#    #+#             */
/*   Updated: 2025/06/26 14:13:51 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "idea number " + std::to_string(i + 1);
	std::cout << "Brain: Default Constructor called" << std::endl;
}

Brain::Brain(Brain &copy)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	std::cout << "Brain: Copy Constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain: Default Deconstructor called" << std::endl;
}

Brain& Brain::operator =(const Brain& copy)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	std::cout << "Brain: assignment constructor called" << std::endl;
	return (*this);
}

void	Brain::setThoughts(std::string string)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = string;
}

void Brain::thinkOutLoud(int amount)
{
	if ((amount <= 100) && (amount >= 0))
		for (int i = 0; i < amount; i++)
			std::cout << this->ideas[i] << std::endl;
}