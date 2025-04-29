/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:52:49 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/15 14:43:11 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
	Zombie *zombie_horde = zombieHorde(5, "Kleiton");
	for (int i = 0; i < 5; i++)
		zombie_horde[i].announce();
	delete [] zombie_horde;
	return (0);
}
