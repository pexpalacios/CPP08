/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:35:46 by penpalac          #+#    #+#             */
/*   Updated: 2025/11/04 15:16:24 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <list>

template <typename T>
int easyFind(T t, int n)
{
	if (find(t.begin(), t.end(), n) != t.end())
		return (n);
	throw std::runtime_error("Value not found");	
}

#endif