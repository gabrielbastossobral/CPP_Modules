/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 10:37:31 by gabastos          #+#    #+#             */
/*   Updated: 2025/07/03 12:18:02 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string 	_name;
		bool 				_signed;
		const int 			_sign_grade;
		const int 			_execute_grade;
		Form();
		Form &operator=(const Form &other);

	public:
		Form(const std::string &name, const int sign_grade, const int execute_grade);
		Form(const Form &other);
		~Form();
		void beSigned(const Bureaucrat &b);
		const std::string &getName() const;
		bool getSigned() const;
		int getSign_grade() const;
		int getExecute_grade() const;

		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};
	
		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};
	

};

std::ostream &operator<<(std::ostream &out, const Form &Form);

#endif