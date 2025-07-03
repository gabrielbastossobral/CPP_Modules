/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:22:05 by gabastos          #+#    #+#             */
/*   Updated: 2025/05/14 14:40:11 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// int main()
// {
//     const Animal*	dog = new Dog();
// 	const Animal*	cat = new Cat();

//     cat->makeSound();
// 	dog->makeSound();
//     std::cout << "What does a dog think?" << std::endl;
//     static_cast<const Dog*>(dog)->useBrain();

//     delete dog;
//     delete cat;
//     return (0);
// }

// int main()
// {
//     Dog perro;
//     {
//     Dog gos;
//     perro.useBrain();
//     gos = perro;
//     }
//     perro.useBrain();
//     return (0);
// }

int main()
{
    const Animal*   dog = new Dog();
    const Animal*   perro = new Dog(*static_cast<const Dog*>(dog));

    dog->makeSound();
    perro->makeSound();

    delete dog;
    delete perro;
}