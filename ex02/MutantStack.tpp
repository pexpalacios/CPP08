/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:55:58 by penpalac          #+#    #+#             */
/*   Updated: 2025/11/03 18:23:22 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(std::stack<T> new_container) : std::stack<T>(new_container) {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &other) : std::stack<T>(other) {}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &other)
{
	if (this != &other)
		std::stack<T>::operator=(other);
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack() {}

///////

template <typename T>
void MutantStack<T>::push(const T &value)
{
	std::stack<T>::push(value);
}

template <typename T>
void MutantStack<T>::pop()
{
	std::stack<T>::pop();
}

template <typename T>
T &MutantStack<T>::top()
{
	return std::stack<T>::top();
}

template <typename T>
size_t MutantStack<T>::size() const
{
	return std::stack<T>::size();
}

/////

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}