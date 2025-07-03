/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:22:00 by gabastos          #+#    #+#             */
/*   Updated: 2025/05/14 14:22:01 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* _brain;
    public:
        Dog();
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);
        ~Dog();

        void    makeSound() const;
        void    useBrain() const;
};

#endif
