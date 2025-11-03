/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:42:16 by penpalac          #+#    #+#             */
/*   Updated: 2025/11/03 15:59:23 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::vector<int> lol;
	for (int i = 0; i < 10; i++)
		lol.push_back(i);

	std::cout << "=== With Vector ===" << std::endl;
	int x = 3;
	std::cout << easyfind(lol, x) << std::endl;
	x = 6;
	std::cout << easyfind(lol, x) << std::endl;
	x = 4;
	std::cout << easyfind(lol, x) << std::endl;

	std::deque<int> dq;
	for (int i = 10; i < 20; i++)
		dq.push_back(i);
	
	std::cout << "=== With Deque ===" << std::endl;
	x = 15;
	std::cout << easyfind(dq, x) << std::endl;
	x = 11;
	std::cout << easyfind(dq, x) << std::endl;
	x = 18;
	std::cout << easyfind(dq, x) << std::endl;

	std::list<int> lst;
	for (int i = 20; i < 30; i++)
		lst.push_back(i);
	
	std::cout << "=== With List ===" << std::endl;
	x = 29;
	std::cout << easyfind(lst, x) << std::endl;
	x = 22;
	std::cout << easyfind(lst, x) << std::endl;
	x = 27;
	std::cout << easyfind(lst, x) << std::endl;

	return (0);
}