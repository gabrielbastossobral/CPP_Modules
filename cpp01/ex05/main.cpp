/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 08:14:33 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/17 08:14:46 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " <level>" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}