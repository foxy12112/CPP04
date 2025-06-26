/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 19:29:53 by ldick             #+#    #+#             */
/*   Updated: 2025/06/26 15:13:23 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
	std::cout << "Animal sounds" << std::endl;
	const Animal *a = new Cat();
	const Animal *b = new Dog();

	a->makeSound();
	b->makeSound();
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
	Dog originalDog;
	originalDog.setThoughts("bone");
	originalDog.thinkOutLoud(1);
	Dog copyDog = originalDog;
	copyDog.thinkOutLoud(1);
	Cat originalCat;
	originalCat.setThoughts("FIShhshS");
	originalCat.thinkOutLoud(20);
	Cat copyCat = originalCat;
	copyCat.thinkOutLoud(100);

	return (0);
}