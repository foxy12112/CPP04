/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 00:34:52 by ldick             #+#    #+#             */
/*   Updated: 2025/06/25 01:20:42 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string Animal::getType(void) const
{
	return(this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "GULUGULUGULU\tGULUGULUGULU" << std::endl;
}

Animal::Animal()
{
	std::cout << "Animal: Default Constructor has been called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal: Default Deconstructor has been called" << std::endl;
}
