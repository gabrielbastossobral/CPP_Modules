/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:19:15 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/10 08:49:19 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void print_name(std::string str)
{
    unsigned int i;

    i = 0;
    if (str.length() > 10)
        std::cout << str.substr(0, 9) << ".";
    else
    {
        i = 0;
        while (i++ < 10 - str.length())
            std::cout << " ";
        std::cout << str;
    }
}

int PhoneBook::get_size(void) const
{
    return (this->size);
}

void PhoneBook::add_contact(std::string data[5])
{
    if (this->size < 8)
        this->size++;
    this->contacts[this->index].set_firstname(data[0]);
    this->contacts[this->index].set_lastname(data[1]);
    this->contacts[this->index].set_nickname(data[2]);
    this->contacts[this->index].set_number(data[3]);
    this->contacts[this->index].set_secret(data[4]);
    this->index = (this->index + 1) % 8;
}

void PhoneBook::display_contact(int i) const
{
	std::cout << "First name: " << this->contacts[i].get_firstname() << std::endl;
	std::cout << "Last name: " << this->contacts[i].get_lastname() << std::endl;
	std::cout << "Nickname: " << this->contacts[i].get_nickname() << std::endl;
	std::cout << "Phone number: " << this->contacts[i].get_number() << std::endl;
	std::cout << "Darkest secret: " << this->contacts[i].get_secret() << std::endl;
}

void PhoneBook::display_phonebook(void) const
{
	int i;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name| Nickname |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	i = 0;
	while (i < this->size)
	{
		std::cout << "|         " << i + 1 << "|";
		print_name(this->contacts[i].get_firstname());
		std::cout << "|";
		print_name(this->contacts[i].get_lastname());
		std::cout << "|";
		print_name(this->contacts[i].get_nickname());
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
}
