/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 00:43:30 by ldick             #+#    #+#             */
/*   Updated: 2025/06/25 04:45:59 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat(void)
{
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "Cat: Default Constructor has been called" << std::endl;
}

Cat::~Cat(void)
{
	delete brain;
	std::cout << "Cat: Default Deconstructor has been called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "MEOWWWW" << std::endl;
}
