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
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) 
{
const Animal* meta = new Animal(); 
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl; 
std::cout << i->getType() << " " << std::endl; 
i->makeSound(); //will output the cat sound! 
j->makeSound();
meta->makeSound();
delete meta;
delete i;
delete j;
const WrongAnimal* meta1 = new WrongAnimal();
const WrongAnimal* i1 = new WrongCat();
std::cout << i1->getType() << " " << std::endl;
meta1->makeSound();
i1->makeSound();
delete meta1;
delete i1;
//Cat *test = new Animal();
//Dog *test2 = new Animal();
}
