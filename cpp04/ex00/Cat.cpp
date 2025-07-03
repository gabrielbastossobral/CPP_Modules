/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:21:00 by gabastos          #+#    #+#             */
/*   Updated: 2025/05/14 14:21:00 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor has been called." << std::endl;
    this->_type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat copy-constructor has been called." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat default destructor has been called." << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Miau" << std::endl;
}