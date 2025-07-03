/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 10:43:11 by gabastos          #+#    #+#             */
/*   Updated: 2025/07/02 14:50:06 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>

int main()
{
    std::cout << "=== TESTE SHRUBBERY CREATION FORM ===" << std::endl;
    
    try {
        // Criando burocratas com diferentes níveis
        Bureaucrat highRank("Alice", 100);  // Pode assinar e executar
        Bureaucrat lowRank("Bob", 150);     // Não pode assinar nem executar
        Bureaucrat midRank("Charlie", 140); // Pode assinar mas não executar
        
        // Criando formulário
        ShrubberyCreationForm shrub("Garden");
        
        std::cout << "\n--- Informações iniciais ---" << std::endl;
        std::cout << shrub << std::endl;
        std::cout << highRank << std::endl;
        std::cout << lowRank << std::endl;
        std::cout << midRank << std::endl;
        
        // Teste 1: Tentar executar sem assinar
        std::cout << "\n--- Teste 1: Executar sem assinar ---" << std::endl;
        highRank.executeForm(shrub);
        
        // Teste 2: Burocrata com nível baixo tenta assinar
        std::cout << "\n--- Teste 2: Nível baixo tenta assinar ---" << std::endl;
        lowRank.signForm(shrub);
        
        // Teste 3: Burocrata adequado assina
        std::cout << "\n--- Teste 3: Assinatura bem-sucedida ---" << std::endl;
        midRank.signForm(shrub);
        
        // Teste 4: Burocrata com nível baixo tenta executar
        std::cout << "\n--- Teste 4: Nível baixo tenta executar ---" << std::endl;
        lowRank.executeForm(shrub);
        
        // Teste 5: Execução bem-sucedida
        std::cout << "\n--- Teste 5: Execução bem-sucedida ---" << std::endl;
        highRank.executeForm(shrub);
        
        // Teste 6: Criando outro formulário para teste adicional
        std::cout << "\n--- Teste 6: Segundo formulário ---" << std::endl;
        ShrubberyCreationForm shrub2("Park");
        Bureaucrat boss("Boss", 1);
        
        boss.signForm(shrub2);
        boss.executeForm(shrub2);

		std::cout << "\n\n=== TESTE ROBOTOMY REQUEST FORM ===" << std::endl;
        
        // Criando burocratas específicos para Robotomy
        Bureaucrat robotExpert("Dr. Robot", 40);    // Pode assinar e executar (grade < 45 e < 72)
        Bureaucrat midLevel("Engineer", 60);        // Pode assinar mas não executar (60 < 72 mas 60 > 45)
        Bureaucrat lowLevel("Intern", 100);         // Não pode assinar nem executar (100 > 72)
        
        // Criando formulário de robotomia
        RobotomyRequestForm robotomy("Bender");
        
        std::cout << "\n--- Informações iniciais Robotomy ---" << std::endl;
        std::cout << robotomy << std::endl;
        std::cout << robotExpert << std::endl;
        std::cout << midLevel << std::endl;
        std::cout << lowLevel << std::endl;
        
        // Teste 7: Tentar executar robotomy sem assinar
        std::cout << "\n--- Teste 7: Executar robotomy sem assinar ---" << std::endl;
        robotExpert.executeForm(robotomy);
        
        // Teste 8: Nível baixo tenta assinar robotomy
        std::cout << "\n--- Teste 8: Nível baixo tenta assinar robotomy ---" << std::endl;
        lowLevel.signForm(robotomy);
        
        // Teste 9: Nível médio assina robotomy
        std::cout << "\n--- Teste 9: Nível médio assina robotomy ---" << std::endl;
        midLevel.signForm(robotomy);
        
        // Teste 10: Nível médio tenta executar (deve falhar - grade > 45)
        std::cout << "\n--- Teste 10: Nível médio tenta executar robotomy ---" << std::endl;
        midLevel.executeForm(robotomy);
        
        // Teste 11: Expert executa robotomy (50% chance)
        std::cout << "\n--- Teste 11: Expert executa robotomy ---" << std::endl;
        robotExpert.executeForm(robotomy);

		std::cout << "\n\n=== TESTE PRESIDENTIAL PARDON FORM ===" << std::endl;
        
        // Criando burocratas específicos para Presidential Pardon
        Bureaucrat president("President", 1);       // Pode assinar e executar (grade = 1)
        Bureaucrat vicePresident("VP", 10);         // Pode assinar mas não executar (10 < 25 mas 10 > 5)
        Bureaucrat minister("Minister", 30);        // Não pode assinar nem executar (30 > 25)
        Bureaucrat citizen("Citizen", 100);         // Não pode assinar nem executar (100 > 25)
        
        // Criando formulário de perdão presidencial
        PresidentialPardonForm pardon("Ford Prefect");
        
        std::cout << "\n--- Informações iniciais Presidential ---" << std::endl;
        std::cout << pardon << std::endl;
        std::cout << president << std::endl;
        std::cout << vicePresident << std::endl;
        std::cout << minister << std::endl;
        std::cout << citizen << std::endl;
        
        // Teste 12: Tentar executar perdão sem assinar
        std::cout << "\n--- Teste 12: Executar perdão sem assinar ---" << std::endl;
        president.executeForm(pardon);
        
        // Teste 13: Cidadão comum tenta assinar perdão
        std::cout << "\n--- Teste 13: Cidadão comum tenta assinar perdão ---" << std::endl;
        citizen.signForm(pardon);
        
        // Teste 14: Ministro tenta assinar perdão (deve falhar - grade > 25)
        std::cout << "\n--- Teste 14: Ministro tenta assinar perdão ---" << std::endl;
        minister.signForm(pardon);
        
        // Teste 15: Vice-presidente assina perdão
        std::cout << "\n--- Teste 15: Vice-presidente assina perdão ---" << std::endl;
        vicePresident.signForm(pardon);
        
        // Teste 16: Vice-presidente tenta executar (deve falhar - grade > 5)
        std::cout << "\n--- Teste 16: Vice-presidente tenta executar perdão ---" << std::endl;
        vicePresident.executeForm(pardon);
        
        // Teste 17: Presidente executa perdão
        std::cout << "\n--- Teste 17: Presidente executa perdão ---" << std::endl;
        president.executeForm(pardon);
        
        // Teste 18: Processo completo com presidente
        std::cout << "\n--- Teste 18: Processo completo presidencial ---" << std::endl;
        PresidentialPardonForm pardon2("Arthur Dent");
        president.signForm(pardon2);
        president.executeForm(pardon2);
        
        
    } catch (const std::exception& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }
    
    std::cout << "\n=== TESTES CONCLUÍDOS ===" << std::endl;
    return 0;
}