/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:42:16 by penpalac          #+#    #+#             */
/*   Updated: 2025/11/04 15:19:22 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.hpp"

int main(void)
{
	std::vector<int> lol;
	for (int i = 0; i < 10; i++)
		lol.push_back(i);
	std::deque<int> dq;
	for (int i = 10; i < 20; i++)
		dq.push_back(i);
	std::list<int> lst;
	for (int i = 20; i < 30; i++)
		lst.push_back(i);
	try
	{
		std::cout << "=== With Vector ===" << std::endl;
		int x = 2;
		std::cout << easyFind(lol, x) << std::endl;
		x = 3;
		std::cout << easyFind(lol, x) << std::endl;
		x = 4;
		std::cout << easyFind(lol, x) << std::endl;

		std::cout << "=== With Deque ===" << std::endl;
		x = 15;
		std::cout << easyFind(dq, x) << std::endl;
		x = 16;
		std::cout << easyFind(dq, x) << std::endl;
		x = 17;
		std::cout << easyFind(dq, x) << std::endl;

		std::cout << "=== With List ===" << std::endl;
		x = 29;
		std::cout << easyFind(lst, x) << std::endl;
		x = 28;
		std::cout << easyFind(lst, x) << std::endl;
		x = 33;
		std::cout << easyFind(lst, x) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}