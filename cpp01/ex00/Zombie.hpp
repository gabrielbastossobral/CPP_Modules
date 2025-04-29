/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:52:39 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/15 11:22:13 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Zombie
{
private:
	std::string _name;
public:
	Zombie();
	Zombie( std::string name );
	~Zombie();
	void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );