/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 15:11:48 by gabastos          #+#    #+#             */
/*   Updated: 2025/07/02 15:58:49 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class AForm;

class Intern
{
	private:
		Intern &operator=(const Intern &other);
		Intern(const Intern& other);
		AForm* createPresidentialPardonForm(const std::string &target);
		AForm* createRobotomyRequestForm(const std::string &target);
		AForm* createShrubberyCreationForm(const std::string &target);
	public:
		Intern();
		AForm *makeForm(const std::string &formName, const std::string &target);
		~Intern();

		class FormNotFoundExcepetion : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif