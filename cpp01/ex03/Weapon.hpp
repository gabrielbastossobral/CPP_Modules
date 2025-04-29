/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 08:59:16 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/16 09:45:12 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>

class Weapon
{
private:
	std::string type;
public:
	Weapon(std::string type);
	~Weapon();
	const std::string &getType() const;
	void setType(std::string type);
};
#endif