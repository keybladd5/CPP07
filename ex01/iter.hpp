/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:01:04 by polmarti          #+#    #+#             */
/*   Updated: 2025/01/30 11:01:07 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T, typename U, typename V>
void iter(T addr, U len, V foo)
{
	for (U i = 0; i < len; i++)
		foo(addr[i]);
}
#endif
