/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 10:43:48 by gabastos          #+#    #+#             */
/*   Updated: 2025/07/03 10:50:42 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		ShrubberyCreationForm(const std::string& target);
		virtual ~ShrubberyCreationForm();
		virtual void execute(Bureaucrat const & executor) const;
};

#endif