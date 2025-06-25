/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 00:51:44 by ldick             #+#    #+#             */
/*   Updated: 2025/06/25 04:46:37 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << "Dog: Default Constructor has been called" << std::endl;
}

Dog::~Dog(void)
{
	delete brain;
	std::cout << "Dog: Default Deconstructor has been called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "BAK BAK BAK" << std::endl;
}
