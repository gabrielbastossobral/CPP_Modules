/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:20:31 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/29 15:20:33 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
	
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &src);
		~ClapTrap();
		
		ClapTrap &operator=(const ClapTrap &rhs);

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName();
		unsigned int getHitPoints();
		unsigned int getEnergyPoints();
		unsigned int getAttackDamage();
		
		void setHitPoints(int hitPoints);
		void setEnergyPoints(int energyPoints);
};