/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 10:48:29 by gabastos          #+#    #+#             */
/*   Updated: 2025/07/01 14:53:27 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;
	Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &rhs);
public:
	
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat();
	const std::string &getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(Form &f);

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif