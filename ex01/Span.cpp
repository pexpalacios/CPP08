/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:02:23 by penpalac          #+#    #+#             */
/*   Updated: 2025/11/03 17:53:57 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _max(0)
{}

Span::Span(unsigned int n) : _max(n)
{}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span &Span::operator=(const Span &copy)
{
	if (this != &copy)
		_max = copy._max;
	return (*this);
}

Span::~Span()
{}

///////

const char* Span::MaxSizeException::what() const throw()
{
	return ("Span's max size reached");
}
const char* Span::SpanNotBigEnoughException::what() const throw()
{
	return ("Object has too few elemenst to find a span");
}
const char* Span::DuplicatedValueException::what() const throw()
{
	return ("Value is already in span");
}

int Span::shortestSpan()
{
	if (_vec.size() <= 1)
		throw (SpanNotBigEnoughException());
	std::vector<int> sorted = _vec;
	std::sort(sorted.begin(), sorted.end());
	int min = INT_MAX;
	for (unsigned int i = 1; i < sorted.size(); i++)
	{
		int diff = sorted[i] - sorted[i - 1];
		if (diff < min)
			min = diff;
	}
	return (min);
}

int Span::longestSpan()
{
	if (_vec.size() <= 1)
		throw (SpanNotBigEnoughException());
	int max = *std::max_element(_vec.begin(), _vec.end());
	int min = *std::min_element(_vec.begin(), _vec.end());

	return (max - min);
}

void Span::addNumber(int number)
{
	if (_vec.size() >= _max)
		throw (MaxSizeException());
	if (std::find(_vec.begin(), _vec.end(), number) != _vec.end())
		throw (DuplicatedValueException());
	_vec.push_back(number);
}

void Span::addMultipleNumbers(std::vector<int>::iterator it01, std::vector<int>::iterator it02)
{
	int range = 0;
	std::vector<int>::iterator it = it01;
	while (it != it02)
	{
		range++;
		it++;
	}
	if ((_vec.size() + range) > _max)
		throw (MaxSizeException());
	for (std::vector<int>::iterator i = it01; i != it02; i++)
	{
		if (std::find(_vec.begin(), _vec.end(), *i) != _vec.end())
			throw (DuplicatedValueException());
		_vec.push_back(*i);
	}
}