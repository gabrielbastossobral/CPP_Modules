/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 10:43:41 by gabastos          #+#    #+#             */
/*   Updated: 2025/07/03 10:55:34 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(void){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("Shrubbery Creation", 145, 137), _target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other), _target(other._target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other)
        _target = other._target;
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    if(!getSigned())
		throw FormNotSigned();
	if (executor.getGrade() > getExecute_grade())
		throw GradeTooLowException();
    
    std::string filename = _target + "_shrubbery";
    std::ofstream file(filename.c_str());
    
    if (!file.is_open())
        throw std::runtime_error("Could not create file");
    
    file << "       _-_\n";
    file << "    /~~   ~~\\\n";
    file << " /~~         ~~\\\n";
    file << "{               }\n";
    file << " \\  _-     -_  /\n";
    file << "   ~  \\\\ //  ~\n";
    file << "_- -   | | _- _\n";
    file << "  _ -  | |   -_\n";
    file << "      // \\\\\n";
    
    file.close();
    std::cout << "Shrubbery has been planted at " << filename << std::endl;
}