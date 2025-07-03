/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 10:44:02 by gabastos          #+#    #+#             */
/*   Updated: 2025/07/03 10:28:35 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("Default"), _signed(false), _sign_grade(75), _execute_grade(75) {}

AForm::AForm(const std::string &name, const int sign_grade, const int execute_grade) : _name(name), _sign_grade(sign_grade), _execute_grade(execute_grade)
{
	if (sign_grade < 1 || execute_grade < 1)
		throw GradeTooHighException();
	else if (sign_grade > 150 || execute_grade > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &other) : _name(other.getName()), _signed(other.getSigned()), 
_sign_grade(other.getSign_grade()), _execute_grade(other.getExecute_grade())
{
}

void AForm::verify(const Bureaucrat &executor) const
{
	if (executor.getGrade() > getExecute_grade())
		throw GradeTooLowException();
	if (!getSigned())
		throw FormNotSigned();
}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		this->_signed = other._signed;
	}
	return *this;
}

AForm::~AForm()
{
}

const std::string& AForm::getName() const
{
	return _name;
}

bool AForm::getSigned() const
{
	return _signed;
}

int AForm::getSign_grade() const
{
	return _sign_grade;
}

int AForm::getExecute_grade() const
{
	return _execute_grade;
}

void AForm::beSigned(const Bureaucrat &b)
{
	if(b.getGrade() > _sign_grade)
		throw GradeTooLowException();
	_signed = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const char *AForm::FormNotSigned::what() const throw()
{
	return "Form is not signed";
}

std::ostream &operator<<(std::ostream &out, const AForm &AForm)
{
	out << "AForm named: " << AForm.getName() << (AForm.getSigned() ? "" : " not") << " signed."
	<< " Sign grade: " << AForm.getSign_grade()
	<< ". Execute grade: " << AForm.getExecute_grade() << std::endl;
	return out;
}