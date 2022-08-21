/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younjkim <younjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 02:20:18 by younjkim          #+#    #+#             */
/*   Updated: 2022/08/21 11:10:54 by younjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Constructor for Cat" << std::endl;
    type = "'cat'";
}

Cat::Cat(const Cat& copy) : Animal("'cat'")
{
    std::cout << "copy cat constructor called" << std::endl;
    this->type = copy.type;
}

Cat &Cat::operator=(const Cat& copy)
{
    this->type = copy.type;
    return (*this);
}

Cat::~Cat() {
    std::cout << "Destructor for Cat" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow" << std::endl;
}