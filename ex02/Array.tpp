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
	_n = 0;
	_arr = new T[_n];
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	_n = n;
	_arr = new T[_n];
}

template<typename T >
Array<T>::Array(Array const &src)
{
	_n = src._n;
	_arr = new T[_n];
	for (unsigned int i = 0; i < _n; i++)
		_arr[i] = src._arr[i];
}

template<typename T>
Array<T> &Array<T>::operator=(Array const &src)
{
	if (this != &src)
	{
		delete[] _arr;
		_n = src._n;
		_arr = new T[_n];
		for (unsigned int i = 0; i < _n; i++)
			_arr[i] = src._arr[i];
	}
	return (*this);
}

template<typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _n)
		throw Array<T>::outOfBoundsException();
	return (_arr[index]);
}

template<typename T>
T const &Array<T>::operator[](unsigned int index) const
{
	if (index >= _n)
		throw Array<T>::outOfBoundsException();
	return (_arr[index]);
}

template<typename T>
void Array<T>::print(void)
{
	for (unsigned int i = 0; i < _n; i++)
		std::cout << "Array in pos[" << i << "] contains = " << _arr[i] << std::endl;
}

template<typename T>
Array<T>::~Array(void)
{
	delete[] _arr;
}

template<typename T>
unsigned int Array<T>::size(void)
{
	return (_n);
}

template<typename T>
const char *Array<T>::outOfBoundsException::what() const throw()
{
	return ("Index pos is out of bounds");
}
