/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younjkim <younjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 02:20:53 by younjkim          #+#    #+#             */
/*   Updated: 2022/08/21 11:37:16 by younjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Cat.hpp"

class Dog : public Animal {
    public:
    Dog();
    Dog(const Dog& copy);
    Dog &operator=(const Dog& copy);
    ~Dog();
    void makeSound() const;
};

#endif