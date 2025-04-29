/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:55:50 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/15 15:14:49 by gabastos         ###   ########.fr       */
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
	void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );
