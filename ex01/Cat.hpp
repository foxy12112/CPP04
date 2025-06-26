/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 00:40:14 by ldick             #+#    #+#             */
/*   Updated: 2025/06/26 14:22:14 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		~Cat(void);
		Cat(Cat &copy);
		Cat& operator =(const Cat& copy);
		void	makeSound(void) const;
		void	setThoughts(std::string string);
		void	thinkOutLoud(int amount);
		Brain *getBrain(void);
	private:
		Brain *brain;
};

#endif