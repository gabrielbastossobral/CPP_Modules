/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:21:04 by gabastos          #+#    #+#             */
/*   Updated: 2025/05/14 14:21:06 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);
        ~Cat();

        void makeSound() const;
};

#endif