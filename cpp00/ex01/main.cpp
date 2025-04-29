/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 08:18:30 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/22 11:32:07 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	is_number(std::string number)
{
	int i;

	i = 0;
	while (number[i])
	{
		if (number[i] == ' ')
		{
			i++;
			continue;
		}
		if (number[i] < '0' || number[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int main()
{
    PhoneBook phonebook;
    std::string input;
    std::string data[5];
    int index;

	index = 0;
	while(1)
	{
		std::cout << "\001\033[1;34m\002PhoneBook> \001\033[0;0m\002";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout << "\001\033[1;34m\002\nEnter Contact Information\001\033[0;0m\002" << std::endl;
			std::cout << "First name: ";
			std::getline(std::cin, data[0]);
			std::cout << "Last name: ";
			std::getline(std::cin, data[1]);
			std::cout << "Nickname: ";
			std::getline(std::cin, data[2]);
			do
			{
				std::cout << "Phone Number: ";
				std::getline(std::cin, data[3]);
				if (is_number(data[3]))
					break;
				std::cout << "Please input a valid number" << std::endl;
			} while (!is_number(data[3]));
			std::cout << "Darkest secret: ";
			std::getline(std::cin, data[4]);
			phonebook.add_contact(data);
			std::cout << "\001\033[1;32m\002Contact added\001\033[0;0m\002" << std::endl;
		}
		else if (input == "SEARCH")
		{
			phonebook.display_phonebook();
			std::cout << "Enter index: ";
			std::cin >> index;
			if (std::cin.fail() || index < 0 || index >= phonebook.get_size())
			{
				std::cout << "\001\033[1;31m\002Invalid index\001\033[0;0m\002" << std::endl;
				std::cin.clear();
				std::getline(std::cin, input);
				continue;
			}
			phonebook.display_contact(index);
			std::cin.clear();
			std::getline(std::cin, input);
			continue;
		}
		else if (input == "EXIT")
		{
			std::cout << "\001\033[1;32m\002Exiting...\001\033[0;0m\002" << std::endl;
			break;
		}
		else
			std::cout << "\001\033[1;31m\002Invalid command\001\033[0;0m\002" << std::endl;
	}
}