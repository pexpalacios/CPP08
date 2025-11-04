/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:02:00 by penpalac          #+#    #+#             */
/*   Updated: 2025/11/04 15:27:51 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	try
	{
		std::cout << "=== Subject test ===" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	
	try
	{
		std::cout << "=== Large Span test ===" << std::endl;
		Span sp = Span(10000);
		std::vector<int> vec;
		for (int i = 0; i < 10000; i++)
			vec.push_back(i);
		sp.addMultipleNumbers(vec.begin(), vec.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "=== Errors test ===" << std::endl;
	try
	{
		Span sp = Span(2);
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);
		sp.addNumber(4);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	///
	try
	{
		Span sp = Span(4);
		std::vector<int> vec;
		for (int i = 0; i < 10; i++)
			vec.push_back(i);
		sp.addMultipleNumbers(vec.begin(), vec.end());
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	///
	try
	{
		Span sp = Span(1);
		sp.addNumber(1);
		sp.longestSpan();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	///
	try
	{
		Span sp = Span(3);
		sp.addNumber(3);
		sp.addNumber(2);
		sp.addNumber(3);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}