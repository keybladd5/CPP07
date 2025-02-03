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
# define ARRAY_HPP
# include <iostream>
# include <cstdlib>

template<typename T>
class Array
{
	private:
			T *_arr;
			unsigned int _n;

	public:
			Array(void);
			Array(unsigned int);
			Array(Array const &);
			Array &operator=(Array const &);
			T const &operator[](unsigned int) const;
			T &operator[](unsigned int);
			~Array();
			unsigned int size(void);
			void print(void);
			class outOfBoundsException : public std::exception
			{
				const char* what() const throw();
			};

};

# include "Array.tpp"
#endif
