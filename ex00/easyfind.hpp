/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:35:46 by penpalac          #+#    #+#             */
/*   Updated: 2025/11/03 15:55:47 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <list>

template <typename T>
int easyfind(T &t, int n)
{
	for (typename T::iterator it = t.begin(); it != t.end(); it++)
	{
		if (*it == n)
			return (*it);
	}
	return (1);
}

#endif