/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:44:02 by polmarti          #+#    #+#             */
/*   Updated: 2025/01/30 10:44:04 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T x, T y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
T min(T x, T y)
{
	return (x < y ? x : y); 
}

template<typename T>
T max(T x, T y)
{
	return (x > y ? x : y); 
}
#endif
