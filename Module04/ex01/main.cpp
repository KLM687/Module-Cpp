/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:12:33 by flee              #+#    #+#             */
/*   Updated: 2022/04/12 15:12:36 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void) 
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	std::cout << ">>----------------TAB BRAIN-------------------<<" << std::endl;
	Animal *tab[10];
	for (int i = 0 ; i < 10 ; i++)
	{
		if (i < 5)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
	}
	std::cout << ">>---------------TAB BRAIN DELETE-------------<<" << std::endl;
	for (int i = 0 ; i < 10 ; i++)
		delete tab[i];
	std::cout << ">>---------------Deep Copy Proof--------------<<" << std::endl;
	Dog *dog = new Dog();
	std::cout << "Ptr to dog brain -> " << dog->getBrain() << std::endl;
	std::cout << "dog ideas = ";
	dog->showIdeas();
	dog->SetIdeas("New EUREKA");
	std::cout << "dog new ideas = ";
	dog->showIdeas();
	Dog *dog1 = new Dog(*dog);
	delete (dog);
	std::cout << "dog1 copy ideas = ";
	dog1->showIdeas();
	std::cout << "Ptr to dog1 brain -> " << dog1->getBrain() << std::endl;
	delete(dog1);
}
