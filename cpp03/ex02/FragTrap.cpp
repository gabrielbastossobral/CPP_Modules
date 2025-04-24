#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor has been called."  << std::endl;
    _name = "Neymar";
	_hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;

}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor, that gathers the name from parameters,";
	std::cout << " has been called." << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor has been called." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
    	this->_hitPoints = other._hitPoints;
    	this->_attackDamage = other._attackDamage;
    	this->_energyPoints = other._energyPoints;
    	this->_name = other._name;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap default destructor has been called." << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() && this->getHitPoints())
	{
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << "FragTrap " << this->getName() << " attacks " << target;
		std::cout << ", causing " << this->getAttackDamage() << " points of damage!";
	}
	else
	{
		std::cout << "FragTrap " << this->getName() << " can't do this action right now.";
		std::cout << std::endl;
	}
}
void	FragTrap::highFivesGuys(void)
{
	std::cout << " HIGH FIVE! " << std::endl;
}