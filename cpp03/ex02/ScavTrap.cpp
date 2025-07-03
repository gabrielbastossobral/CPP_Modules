/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:21:31 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/29 15:21:32 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->setName("Messi");
	this->sethitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap default construtor has been called." << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->sethitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap constructor, which gathers the name from parameter,";
	std::cout << " has been called." << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor has been called." << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_attackDamage = other._attackDamage;
		this->_energyPoints = other._energyPoints;
		this->_hitPoints = other._hitPoints;
	}
	return (*this);
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap default destructor has been called." << std::endl;
}
void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode. You don't want to mess with it." << std::endl;
}
void	ScavTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() && this->getHitPoints())
	{
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << "ScavTrap " << this->getName() << " attacks " << target;
		std::cout << ", causing " << this->getAttackDamage() << " points of damage!";
		std::cout << " NICE DAMAGE! " << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->getName() << " can't do this action right now.";
		std::cout << std::endl;
	}
}