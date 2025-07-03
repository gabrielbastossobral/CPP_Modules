/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:21:43 by gabastos          #+#    #+#             */
/*   Updated: 2025/05/14 14:21:43 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);
        virtual ~Animal();

        void setType(std::string type);
        std::string getType() const;
        virtual void makeSound() const;
};

#endif
