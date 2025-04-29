/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:56:02 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/15 13:47:14 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	_name = "Zombie";
	std::cout << "A Zombie appears " << std::endl;
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
