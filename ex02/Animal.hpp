/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 19:30:22 by ldick             #+#    #+#             */
/*   Updated: 2025/06/26 15:12:44 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		virtual std::string getType(void) const;
		virtual void	makeSound(void) const = 0;
		Animal();
		Animal(Animal &copy);
		virtual ~Animal();
		Animal& operator =(const Animal& copy);
	protected:
		std::string type;
	
};

#endif