/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younjkim <younjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 02:26:02 by younjkim          #+#    #+#             */
/*   Updated: 2022/08/21 02:26:23 by younjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "Constructor for WrongCat" << std::endl;
    type = "'WrongCat'";
}

WrongCat::~WrongCat() {
    std::cout << "Destructor for WrongCat" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "Meow" << std::endl;
}