/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 10:47:59 by gabastos          #+#    #+#             */
/*   Updated: 2025/06/30 15:59:37 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	// Testando construção normal
	Bureaucrat alice("Alice", 2);
	Bureaucrat bob("Bob", 149);

	std::cout << "=== Bureaucrats criados ===" << std::endl;
	std::cout << alice << std::endl;
	std::cout << bob << std::endl;

	std::cout << "\n=== Testando incrementGrade ===" << std::endl;
	alice.incrementGrade();
	std::cout << alice << std::endl;

	std::cout << "\n=== Testando decrementGrade ===" << std::endl;
	bob.decrementGrade();
	std::cout << bob << std::endl;

	std::cout << "\n=== Testando exceções ===" << std::endl;
	
	// Teste: grade muito alto
	try {
		alice.incrementGrade(); // Deveria lançar exceção (grade = 1)
	} catch (const std::exception &e) {
		std::cerr << "Exceção de valor passando 1 capturada: " << e.what() << std::endl;
	}

	// Teste: grade muito baixo
	try {
		bob.decrementGrade(); // Deveria lançar exceção (grade = 150)
	} catch (const std::exception &e) {
		std::cerr << "Exceção de valor passando 150 capturada: " << e.what() << std::endl;
	}

	// Teste: construção com grade inválido
	try {
		Bureaucrat invalid("Invalid", 0); // Grade muito alto
	} catch (const std::exception &e) {
		std::cerr << "Exceção na construção: " << e.what() << std::endl;
	}

	try {
		Bureaucrat invalid2("Invalid2", 151); // Grade muito baixo
	} catch (const std::exception &e) {
		std::cerr << "Exceção na construção: " << e.what() << std::endl;
	}

    return 0;
}