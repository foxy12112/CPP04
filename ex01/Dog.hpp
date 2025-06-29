/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 00:49:56 by ldick             #+#    #+#             */
/*   Updated: 2025/06/26 14:22:40 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		~Dog(void);
		Dog(Dog &copy);
		Dog& operator =(const Dog& copy);
		void	makeSound(void) const;
		void	setThoughts(std::string string);
		void	thinkOutLoud(int amount);
		Brain *getBrain(void);
	private:
		Brain *brain;
};

#endif