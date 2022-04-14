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

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void) 
{
/*const AAnimal* meta = new AAnimal(); 
const AAnimal* j = new Dog();
const AAnimal* i = new Cat();*/

const Dog *meta = new Dog();
const Dog *j = new Dog();
const Cat *i = new Dog();

std::cout << j->getType() << " " << std::endl; 
std::cout << i->getType() << " " << std::endl; 
i->makeSound(); //will output the cat sound! 
j->makeSound();
meta->makeSound();
delete meta;
delete i;
delete j;
return 0; 	
}
