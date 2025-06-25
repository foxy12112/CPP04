/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 03:02:04 by ldick             #+#    #+#             */
/*   Updated: 2025/06/25 03:04:37 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
		virtual std::string getType(void) const;
		virtual void	makeSound(void) const;
		WrongAnimal();
		virtual ~WrongAnimal();
	
	protected:
		std::string type;
	
};

#endif