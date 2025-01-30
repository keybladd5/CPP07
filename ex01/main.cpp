/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:13:32 by polmarti          #+#    #+#             */
/*   Updated: 2025/01/30 11:13:34 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void sum_int(int &i)
{
	i = i + 1;
}

void sum_char(char &i)
{
	i = i + 1;
}
int main(void)
{
	{
		std::cout << "\nTest int arr: ";
		int arr[] = {1, 2, 3, 4, 5};
		std::cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << std::endl << std::endl;
		::iter(arr, 5, sum_int);
		std::cout << "Test after iter template instance called int arr: ";
		std::cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << std::endl << std::endl;
	}
	{
		std::cout << "\nTest char arr: ";
		char arr[] = {"Hola "};
		std::cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << std::endl << std::endl;
		::iter(arr, 5, sum_char);
		std::cout << "Test after iter template instance called char arr: ";
		std::cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << std::endl << std::endl;
	}
}
