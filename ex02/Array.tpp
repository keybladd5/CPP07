/*# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Array.tpp                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/30 12:13:53 by polmarti          #+#    #+#              #
#    Updated: 2025/01/30 12:13:56 by polmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #*/


#include "Array.hpp"

template<typename T>
Array<T>::Array(void)
{

}

template<typename T>
Array<T>::Array(unsigned int n)
{

}

template<typename T>
Array<T> const &Array<T>::operator=(Array const &src)
{

}

template<typename T>
Array<T>::~Array(void)
{

}

template<typename T>
T Array<T>::size(void)
{

}

template<typename T>
const char *Array<T>::outOfBoundsException::what() const throw()
{
	return ("Index pos is out of bounds");
}
