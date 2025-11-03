/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:02:26 by penpalac          #+#    #+#             */
/*   Updated: 2025/11/03 17:52:50 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

class Span
{
	private:
		unsigned int _max;
		std::vector<int> _vec;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &copy);
		Span &operator=(const Span &copy);
		~Span();

		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		void addMultipleNumbers(std::vector<int>::iterator it01, std::vector<int>::iterator it02);

		class MaxSizeException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class SpanNotBigEnoughException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class DuplicatedValueException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif