/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:21:55 by gabastos          #+#    #+#             */
/*   Updated: 2025/05/14 14:21:55 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain*  _brain;
    public:
        Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);
        ~Cat();

        void makeSound() const;
};

#endif
