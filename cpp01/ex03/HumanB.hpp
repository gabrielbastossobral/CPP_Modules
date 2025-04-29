/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 09:00:10 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/16 09:40:54 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"
class HumanB
{
private:
	std::string name;
	Weapon *weapon;
public:
	HumanB(std::string name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);
};
