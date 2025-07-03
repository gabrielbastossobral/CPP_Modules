/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:20:35 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/29 15:20:36 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ClapTrap	name(argv[1]);
		ClapTrap	cT(name);
		ClapTrap	cT1;
		cT1 = cT;
		std::cout << "ClapTrap " << cT1.getName() << " stats are:" << std::endl;
		std::cout <<"Attack: " << cT1.getAttackDamage() << std::endl << "Hit Points: ";
		std::cout << cT1.getHitPoints() << std::endl << "Energy points: ";
		std::cout << cT1.getEnergyPoints() << std::endl;
		cT1.attack("the enemy");
		cT1.beRepaired(100);
		cT1.takeDamage(50);
		std::cout << "ClapTrap " << cT1.getName() << " has " << cT1.getHitPoints();
		std::cout << " Hit Points and "<< cT1.getEnergyPoints() << " Energy Points.";
		std::cout << std::endl;
	}
	else
	{
		ClapTrap	cT1;
		std::cout << "ClapTrap " << cT1.getName() << " stats are:" << std::endl;
		std::cout <<"Attack: " << cT1.getAttackDamage() << std::endl << "Hit Points: ";
		std::cout << cT1.getHitPoints() << std::endl << "Energy points: ";
		std::cout << cT1.getEnergyPoints() << std::endl;
		cT1.attack("the enemy");
		cT1.beRepaired(100);
		cT1.takeDamage(50);
		std::cout << "ClapTrap " << cT1.getName() << " has " << cT1.getHitPoints();
		std::cout << " Hit Points and "<< cT1.getEnergyPoints() << " Energy Points.";
		std::cout << std::endl;
	}
	return (0);
}