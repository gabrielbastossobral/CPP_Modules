/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:20:53 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/29 15:20:54 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		std::cout << RED;
		ClapTrap	cT1(argv[1]);
		std::cout << "Claptrap " << cT1.getName() << " has " << cT1.getHitPoints();
		std::cout << " hit points and "<< cT1.getEnergyPoints() << " energy points.";
		std::cout << std::endl;
		cT1.attack("the enemy");
		cT1.beRepaired(100);
		cT1.takeDamage(50);
		std::cout << "Claptrap " << cT1.getName() << " has " << cT1.getHitPoints();
		std::cout << " hit points and "<< cT1.getEnergyPoints() << " energy points.";
		std::cout << RESET << std::endl << std::endl;

		std::cout << BLUE;
		ScavTrap	cT2(argv[2]);
		std::cout << "ScavTrap " << cT2.getName() << " has " << cT2.getHitPoints();
		std::cout << " hit points and "<< cT2.getEnergyPoints() << " energy points.";
		std::cout << std::endl;
		cT2.attack("the enemy");
		cT2.guardGate();
		cT2.beRepaired(40);
		cT2.takeDamage(100);
		std::cout << "ScavTrap " << cT2.getName() << " has " << cT2.getHitPoints();
		std::cout << " hit points and "<< cT2.getEnergyPoints() << " energy points.";
		std::cout << RESET << std::endl << std::endl;
	}
	else
	{
		std::cout << RED;
		ClapTrap	cT1;
		std::cout << "Claptrap " << cT1.getName() << " has " << cT1.getHitPoints();
		std::cout << " hit points and "<< cT1.getEnergyPoints() << " energy points.";
		std::cout << std::endl;
		cT1.attack("the enemy");
		cT1.beRepaired(100);
		cT1.takeDamage(50);
		std::cout << "Claptrap " << cT1.getName() << " has " << cT1.getHitPoints();
		std::cout << " hit points and "<< cT1.getEnergyPoints() << " energy points.";
		std::cout << RESET << std::endl << std::endl;

		std::cout << BLUE;
		ScavTrap	cT2;
		std::cout << "ScavTrap " << cT2.getName() << " has " << cT2.getHitPoints();
		std::cout << " hit points and "<< cT2.getEnergyPoints() << " energy points.";
		std::cout << std::endl;
		cT2.attack("the enemy");
		cT2.guardGate();
		cT2.beRepaired(40);
		cT2.takeDamage(100);
		std::cout << "ScavTrap " << cT2.getName() << " has " << cT2.getHitPoints();
		std::cout << " hit points and "<< cT2.getEnergyPoints() << " energy points.";
		std::cout << RESET << std::endl << std::endl;
	}
	return (0);
}