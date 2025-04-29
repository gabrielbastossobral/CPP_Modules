/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 08:59:34 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/16 09:13:58 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
	return ;
}
HumanA::~HumanA()
{
	return ;
}
void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
	return ;
}