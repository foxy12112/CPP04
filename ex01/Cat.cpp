/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 00:43:30 by ldick             #+#    #+#             */
/*   Updated: 2025/06/26 14:35:17 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat(void)
{
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "Cat: Default Constructor has been called" << std::endl;
}

Cat::Cat(Cat &copy)
{
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	std::cout << "Cat: Copy Constructor has been called" << std::endl;
}
Cat& Cat::operator =(const Cat& copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		this->brain = new Brain(*copy.brain);
	}
		std::cout << "Cat: Default Assignment Constructor has been called" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "Cat: Default Deconstructor has been called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "MEOWWWW" << std::endl;
}

void	Cat::setThoughts(std::string string)
{
	this->brain->setThoughts(string);
}

void Cat::thinkOutLoud(int amount)
{
	this->brain->thinkOutLoud(amount);
}

Brain *Cat::getBrain(void)
{
	return (this->brain);
}