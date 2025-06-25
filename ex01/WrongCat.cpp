/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 03:10:44 by ldick             #+#    #+#             */
/*   Updated: 2025/06/25 03:24:15 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "WrongCat: Default Constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat: Default Deconstructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "*sounds of a not cat thing*" << std::endl;
}
