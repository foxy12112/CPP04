/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 00:51:44 by ldick             #+#    #+#             */
/*   Updated: 2025/06/26 14:36:01 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << "Dog: Default Constructor has been called" << std::endl;
}

Dog::Dog(Dog &copy)
{
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	std::cout << "Dog: Copy Constructor has been called" << std::endl;
}

Dog& Dog::operator =(const Dog& copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		this->brain = new Brain(*copy.brain);
	}
	std::cout << "Dog: Default Assignment Constructor has been called" << std::endl;
	return (*this);
}

void	Dog::setThoughts(std::string string)
{
	this->brain->setThoughts(string);
}

void Dog::thinkOutLoud(int amount)
{
	this->brain->thinkOutLoud(amount);
}

Brain *Dog::getBrain(void)
{
	return (this->brain);
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Dog: Default Deconstructor has been called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "BAK BAK BAK" << std::endl;
}
