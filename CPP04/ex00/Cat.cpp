/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younjkim <younjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 02:20:18 by younjkim          #+#    #+#             */
/*   Updated: 2022/08/21 02:20:32 by younjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Constructor for Cat" << std::endl;
    type = "'cat'";
}

Cat::~Cat() {
    std::cout << "Destructor for Cat" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow" << std::endl;
}