/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 19:29:53 by ldick             #+#    #+#             */
/*   Updated: 2025/06/25 18:53:39 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "Animal sounds" << std::endl;

	const Animal *a = new Cat();
	const Animal *b = new Dog();
	const Animal c;

	a->makeSound();
	b->makeSound();
	c.makeSound();
	delete a;
	delete b;
	std::cout << "\n\n" << std::endl;
	
	const Animal *many[50];
	for (int i = 0; i < 50; i++)
	{
		if (i < 25)
			many[i] = new Cat();
		else
			many[i] = new Dog();
	}
	for (int i = 0; i < 50; i++)
		many[i]->makeSound();
	for (int i = 0; i < 50; i++)
		delete many[i];
	
}