/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younjkim <younjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 01:51:01 by younjkim          #+#    #+#             */
/*   Updated: 2022/08/21 01:51:26 by younjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Constructor for Animal" << std::endl;
    type = "'animal'";
}

Animal::~Animal() {
    std::cout << "Destructor for Animal" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Meta sound" << std::endl;
}

std::string Animal::getType() const {
    return type;
}