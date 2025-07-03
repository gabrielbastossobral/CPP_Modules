/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 10:37:39 by gabastos          #+#    #+#             */
/*   Updated: 2025/07/03 10:27:51 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Default"), _signed(false), _sign_grade(75), _execute_grade(75) {}

Form::Form(const std::string &name, const int sign_grade, const int execute_grade) : _name(name), _sign_grade(sign_grade), _execute_grade(execute_grade)
{
	if (sign_grade < 1 || execute_grade < 1)
		throw GradeTooHighException();
	else if (sign_grade > 150 || execute_grade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &other) : _name(other.getName()), _signed(other.getSigned()), 
_sign_grade(other.getSign_grade()), _execute_grade(other.getExecute_grade())
{
	std::cout << "Bureaucrat copy constructor has been called." << std::endl;
}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
	{
		this->_signed = other._signed;
	}
	return *this;
}

Form::~Form()
{
	std::cout << "Form default destructor has been called." << std::endl;
}

const std::string& Form::getName() const
{
	return _name;
}

bool Form::getSigned() const
{
	return _signed;
}

int Form::getSign_grade() const
{
	return _sign_grade;
}

int Form::getExecute_grade() const
{
	return _execute_grade;
}

void Form::beSigned(const Bureaucrat &b)
{
	if(b.getGrade() > _sign_grade)
		throw GradeTooLowException();
	_signed = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream &operator<<(std::ostream &out, const Form &Form)
{
	out << "Form named: " << Form.getName() << (Form.getSigned() ? "" : " not") << " signed."
	<< " Sign grade: " << Form.getSign_grade()
	<< ". Execute grade: " << Form.getExecute_grade() << std::endl;
	return out;
}