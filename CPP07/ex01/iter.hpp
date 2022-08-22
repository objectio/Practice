/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younjkim <younjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 01:36:20 by younjkim          #+#    #+#             */
/*   Updated: 2022/08/23 01:36:20 by younjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T array[], size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

template <typename T>
void increase(T & n)
{
	n++;
}

template <typename T>
void print_array(T array[], size_t size)
{
	std::cout << "[ ";
	for (size_t i = 0; i < size; i++)
	{
		std::cout << array[i];
		if (i != size - 1)
			std::cout << ", ";
	}
	std::cout << " ]" << std::endl;
}

#endif