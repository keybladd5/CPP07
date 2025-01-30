/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:01:16 by polmarti          #+#    #+#             */
/*   Updated: 2025/01/30 12:01:18 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

//MUST use the operator new[] to allocate memory

template<typename T>
class Array
{
	private:
			T *_arr;
			unsigned int _n;

	public:
			Array(void); //creates an empty array
			Array(unsigned int); //: Creates an array of n elements initialized by default.
			Array(Array const &);
			Array const &operator=(Array const &); //modifying either the original array or its copy after copying musn’t affect the other array.
			~Array();
			//Elements can be accessed through the subscript operator: [ ].
			T size(void);
			class outOfBoundsException : public std::exception
			{
				const char* what() const throw();
			};

};

#include "Array.tpp";
#endif
