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