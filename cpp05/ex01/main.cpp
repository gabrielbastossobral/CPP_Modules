/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 10:47:59 by gabastos          #+#    #+#             */
/*   Updated: 2025/07/02 10:37:48 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
    std::cout << "=== TESTE 1: Criação de Burocrata e Formulário ===" << std::endl;
    try {
        Bureaucrat john("John", 50);
        Form taxForm("Tax Form", 45, 30);
        
        std::cout << john << std::endl;
        std::cout << taxForm << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Erro: " << e.what() << std::endl;
    }

    std::cout << "\n=== TESTE 2: Burocrata assina formulário com sucesso ===" << std::endl;
    try {
        Bureaucrat alice("Alice", 40);
        Form contract("Contract", 45, 30);
        
        std::cout << alice << std::endl;
        std::cout << contract << std::endl;
        
        alice.signForm(contract);
        std::cout << contract << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Erro: " << e.what() << std::endl;
    }

    std::cout << "\n=== TESTE 3: Burocrata sem grade suficiente para assinar ===" << std::endl;
    try {
        Bureaucrat bob("Bob", 60);
        Form importantDoc("Important Document", 50, 25);
        
        std::cout << bob << std::endl;
        std::cout << importantDoc << std::endl;
        
        bob.signForm(importantDoc);
        std::cout << importantDoc << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Erro: " << e.what() << std::endl;
    }

    std::cout << "\n=== TESTE 4: Exceções na criação de formulário ===" << std::endl;
    try {
        std::cout << "Tentando criar formulário com grade de assinatura muito alta (0):" << std::endl;
        Form invalidForm1("Invalid Form 1", 0, 50);
    }
    catch (std::exception& e) {
        std::cout << "Erro capturado: " << e.what() << std::endl;
    }

    try {
        std::cout << "Tentando criar formulário com grade de execução muito baixa (151):" << std::endl;
        Form invalidForm2("Invalid Form 2", 50, 151);
    }
    catch (std::exception& e) {
        std::cout << "Erro capturado: " << e.what() << std::endl;
    }

    std::cout << "\n=== TESTE 5: Exceções na criação de burocrata ===" << std::endl;
    try {
        std::cout << "Tentando criar burocrata com grade muito alta (0):" << std::endl;
        Bureaucrat invalidBureaucrat1("Invalid1", 0);
    }
    catch (std::exception& e) {
        std::cout << "Erro capturado: " << e.what() << std::endl;
    }

    try {
        std::cout << "Tentando criar burocrata com grade muito baixa (151):" << std::endl;
        Bureaucrat invalidBureaucrat2("Invalid2", 151);
    }
    catch (std::exception& e) {
        std::cout << "Erro capturado: " << e.what() << std::endl;
    }

    std::cout << "\n=== TESTE 6: Promoção e rebaixamento de burocrata ===" << std::endl;
    try {
        Bureaucrat charlie("Charlie", 2);
        Form topSecretForm("Top Secret", 1, 1);
        
        std::cout << charlie << std::endl;
        std::cout << "Tentando assinar formulário top secret:" << std::endl;
        charlie.signForm(topSecretForm);
        
        std::cout << "Promovendo Charlie:" << std::endl;
        charlie.incrementGrade();
        std::cout << charlie << std::endl;
        
        std::cout << "Tentando assinar formulário top secret novamente:" << std::endl;
        charlie.signForm(topSecretForm);
        std::cout << topSecretForm << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Erro: " << e.what() << std::endl;
    }

    return 0;
}