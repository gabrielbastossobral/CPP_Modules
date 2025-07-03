/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:21:40 by gabastos          #+#    #+#             */
/*   Updated: 2025/05/14 14:21:40 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal default constructor has been called." << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type)
{
    std::cout << "Animal copy-constructor has been called." << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal default destructor has been called." << std::endl;
}

void Animal::setType(std::string _type)
{
    this->_type = _type;
}

std::string Animal::getType() const
{
    return (this->_type);
}

void Animal::makeSound() const
{
    std::cout << "Animal makes a sound." << std::endl;
}
