/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younjkim <younjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 02:21:50 by younjkim          #+#    #+#             */
/*   Updated: 2022/08/21 02:22:05 by younjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Constructor for Dog" << std::endl;
    type = "'dog'";
}

Dog::~Dog() {
    std::cout << "Destructor for Dog" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof" << std::endl;
}
