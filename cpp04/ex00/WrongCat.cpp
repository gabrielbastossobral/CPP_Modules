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