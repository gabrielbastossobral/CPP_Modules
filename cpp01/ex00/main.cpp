/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:40:48 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/15 13:42:44 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
	Zombie *zombie_kleiton = newZombie("Kleiton");
	Zombie *zombie_reinaldo = newZombie("Reinaldo");
	zombie_reinaldo->announce();
	zombie_kleiton->announce();
	delete zombie_kleiton;
	delete zombie_reinaldo;
	randomChump("Eliel");
	randomChump("Teodoro");
	return (0);
}
