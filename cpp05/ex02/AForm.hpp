/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 10:44:10 by gabastos          #+#    #+#             */
/*   Updated: 2025/07/03 10:34:24 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string 	_name;
		bool 				_signed;
		const int 			_sign_grade;
		const int 			_execute_grade;

	public:
		AForm();
		AForm &operator=(const AForm &other);
		AForm(const std::string &name, const int sign_grade, const int execute_grade);
		AForm(const AForm &other);
		virtual ~AForm();
		void beSigned(const Bureaucrat &b);
		virtual void execute(const Bureaucrat &executor) const = 0;
		const std::string &getName() const;
		bool getSigned() const;
		int getSign_grade() const;
		int getExecute_grade() const;
		void verify(const Bureaucrat &executor) const;

		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};
	
		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};

		class FormNotSigned : public std::exception
		{
			virtual const char *what() const throw();
		};

};

std::ostream &operator<<(std::ostream &out, const AForm &AForm);

#endif