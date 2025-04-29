/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:55:38 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/15 15:18:53 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	_name = "Zombie";
	return ;
}

Zombie::Zombie( std::string name )
{
	this->_name = name;
	std::cout << this->_name << " appears" << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is dead" << std::endl;
	return ;
}

void    Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}

void Zombie::setName(std::string name)
{
    this->_name = name;
	std::cout << this->_name << " appears" << std::endl;
}
