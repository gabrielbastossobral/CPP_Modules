/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:21:33 by gabastos          #+#    #+#             */
/*   Updated: 2025/05/14 14:21:34 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat default constructor has been called." << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "WrongCat copy-constructor has been called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat default destructor has been called." << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "Maybe I'm a cat or something like that." << std::endl;
}