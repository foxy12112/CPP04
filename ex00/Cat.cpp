/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 00:43:30 by ldick             #+#    #+#             */
/*   Updated: 2025/06/25 02:58:20 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Cat: Default Constructor has been called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat: Default Deconstructor has been called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "MEOWWWW" << std::endl;
}
