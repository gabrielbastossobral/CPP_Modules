/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:22:45 by gabastos          #+#    #+#             */
/*   Updated: 2025/05/14 14:22:46 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog default constructor has been called." << std::endl;
    this->_type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog copy-constructor has been called." << std::endl;
    this->_brain = new Brain(*other._brain);
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        delete _brain;
        this->_brain = new Brain(*other._brain);
        this->_type = other._type;
    }
    return (*this);
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog default destructor has been called." << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Au au" << std::endl;
}

void    Dog::useBrain() const
{
    _brain->printIdeas();
}
