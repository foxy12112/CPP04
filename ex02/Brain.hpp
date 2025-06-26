/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 04:42:57 by ldick             #+#    #+#             */
/*   Updated: 2025/06/26 14:13:53 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(Brain &copy);
		~Brain();
		Brain& operator =(const Brain& copy);
		void	setThoughts(std::string string);
		void thinkOutLoud(int amount);
	private:
		std::string ideas[100];
};

#endif