/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:08:50 by flee              #+#    #+#             */
/*   Updated: 2022/05/03 14:08:51 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
std::list<int> mstack;
mstack.push_back(5);
mstack.push_back(17);
//std::cout << mstack.top() << std::endl;
//mstack.pop();
//std::cout << mstack.size() << std::endl;
mstack.push_back(3);
mstack.push_back(5);
mstack.push_back(737);
//[...]
mstack.push_back(0);
std::list<int>::iterator it = mstack.begin();
std::list<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::list<int> s(mstack);
return 0;
}

/*int main (void)
{
	MutantStack<char> test;

	test.push('a');
	test.push('a');
	test.push('a');
	test.push('a');
	test.push('a');
	for (MutantStack<char>::iterator it = test.begin() ; it != test.end() ; it++)
		std::cout << *it << std::endl;
	

}*/