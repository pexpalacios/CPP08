/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:57:23 by penpalac          #+#    #+#             */
/*   Updated: 2025/11/04 15:38:42 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main(void)
{
	std::cout << "=== MutantStack Test ===" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(13);
	std::cout << "top of mstack: " << mstack.top() << std::endl;
	std::cout << "size of mstack before pop: " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "size of mstack after pop: " << mstack.size() << std::endl;
	/////
	mstack.push(3);
	mstack.push(5);
	mstack.push(17);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "mstack: ";
	while (it != ite)
	{
		std::cout << *it << ", ";
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);

	std::cout << "=== List test ===" << std::endl;
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(13);
	std::cout << "top of list: " << lst.back() << std::endl;
	std::cout << "size of list before pop: " << lst.size() << std::endl;
	lst.pop_back();
	std::cout << "size of list after pop: " << lst.size() << std::endl;
	/////
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(17);
	lst.push_back(0);
	std::list<int>::iterator lst_it = lst.begin();
	std::list<int>::iterator lst_ite = lst.end();
	++lst_it;
	--lst_it;
	std::cout << "list: ";
	while (lst_it != lst_ite)
	{
		std::cout << *lst_it << ", ";
		++lst_it;
	}
	std::cout << std::endl;
	return (0);
}