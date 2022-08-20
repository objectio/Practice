/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younjkim <younjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 02:24:41 by younjkim          #+#    #+#             */
/*   Updated: 2022/08/21 02:25:06 by younjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "Constructor for WrongAnimal" << std::endl;
    type = "'WrongAnimal'";
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Destructor for WrongAnimal" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "Meta sound" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}