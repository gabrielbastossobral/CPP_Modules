/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 15:11:39 by gabastos          #+#    #+#             */
/*   Updated: 2025/07/02 15:54:33 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern default constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

AForm* Intern::createPresidentialPardonForm(const std::string &target)
{
	return new PresidentialPardonForm(target);
}

AForm* Intern::createRobotomyRequestForm(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

AForm* Intern::createShrubberyCreationForm(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

AForm* Intern::makeForm(const std::string &formName, const std::string &target)
{
	std::string arrayForms[3] = 
	{
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};
	
	for (int i = 0; i < 3; i++)
	{
		if (formName == arrayForms[i])
		{
			std::cout << "Intern creates " << formName <<std::endl;
			switch(i)
			{
				case 0:
					return createPresidentialPardonForm(target);
				case 1:
					return createRobotomyRequestForm(target);
				case 2:
					return createShrubberyCreationForm(target);
				default:
					break;
			}
		}
	}
	throw FormNotFoundExcepetion();
}

const char* Intern::FormNotFoundExcepetion::what() const throw()
{
	return "Form not found";
}