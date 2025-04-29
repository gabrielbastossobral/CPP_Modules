/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 08:17:33 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/10 08:35:40 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"
#include <iostream>

class PhoneBook {
private:
	Contact	contacts[8];
	int 	size;
	int 	index;
public:
	PhoneBook() : size (0), index (0) {}
	int 	get_size(void) const;
	void	add_contact(std::string data[5]);
	void	display_contact(int i) const;
	void	display_phonebook(void) const;
};