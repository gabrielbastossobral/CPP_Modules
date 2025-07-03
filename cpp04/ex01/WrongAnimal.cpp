/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:22:12 by gabastos          #+#    #+#             */
/*   Updated: 2025/05/14 14:22:12 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << "WrongAnimal default constructor has been called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type)
{
    std::cout << "WrongAnimal copy-constructor has been called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal default destructor has been called." << std::endl;
}

void WrongAnimal::setType(std::string _type)
{
    this->_type = _type;
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "I don't know what say" << std::endl;
}
