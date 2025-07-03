/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 10:43:11 by gabastos          #+#    #+#             */
/*   Updated: 2025/07/02 15:50:42 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

#include <iostream>

int main()
{
    std::cout << "=== TESTE 1: Criando forms válidos ===" << std::endl;
    {
        Intern intern;
        AForm *form1 = NULL;
        AForm *form2 = NULL;
        AForm *form3 = NULL;

        try
        {
            // Teste 1: Presidential Pardon Form
            std::cout << "\n--- Criando Presidential Pardon Form ---" << std::endl;
            form1 = intern.makeForm("presidential pardon", "Bender");
            std::cout << *form1 << std::endl;

            // Teste 2: Robotomy Request Form
            std::cout << "\n--- Criando Robotomy Request Form ---" << std::endl;
            form2 = intern.makeForm("robotomy request", "Android");
            std::cout << *form2 << std::endl;

            // Teste 3: Shrubbery Creation Form
            std::cout << "\n--- Criando Shrubbery Creation Form ---" << std::endl;
            form3 = intern.makeForm("shrubbery creation", "Garden");
            std::cout << *form3 << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << "Erro: " << e.what() << std::endl;
        }

        // Limpeza
        delete form1;
        delete form2;
        delete form3;
    }

    std::cout << "\n=== TESTE 2: Form inválido ===" << std::endl;
    {
        Intern intern;
        AForm *form = NULL;

        try
        {
            std::cout << "\n--- Tentando criar form inexistente ---" << std::endl;
            form = intern.makeForm("invalid form", "Target");
            std::cout << *form << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << "Exceção capturada: " << e.what() << std::endl;
        }

        delete form; // Será NULL se falhou
    }

    std::cout << "\n=== TESTE 3: Testando forms criados com Bureaucrat ===" << std::endl;
    {
        Intern intern;
        Bureaucrat highRank("Boss", 1);
        Bureaucrat lowRank("Newbie", 150);

        try
        {
            std::cout << "\n--- Testando Presidential Pardon ---" << std::endl;
            AForm *presidentialForm = intern.makeForm("presidential pardon", "Criminal");
            
            std::cout << "\nTentando assinar com bureaucrata de baixo rank:" << std::endl;
            lowRank.signForm(*presidentialForm);
            
            std::cout << "\nTentando assinar com bureaucrata de alto rank:" << std::endl;
            highRank.signForm(*presidentialForm);
            
            std::cout << "\nTentando executar:" << std::endl;
            highRank.executeForm(*presidentialForm);
            
            delete presidentialForm;

            std::cout << "\n--- Testando Robotomy Request ---" << std::endl;
            AForm *robotomyForm = intern.makeForm("robotomy request", "Robot");
            
            highRank.signForm(*robotomyForm);
            highRank.executeForm(*robotomyForm);
            
            delete robotomyForm;

            std::cout << "\n--- Testando Shrubbery Creation ---" << std::endl;
            AForm *shrubberyForm = intern.makeForm("shrubbery creation", "BackYard");
            
            highRank.signForm(*shrubberyForm);
            highRank.executeForm(*shrubberyForm);
            
            delete shrubberyForm;
        }
        catch (std::exception &e)
        {
            std::cout << "Erro: " << e.what() << std::endl;
        }
    }

    std::cout << "\n=== TESTE 4: Múltiplos forms inválidos ===" << std::endl;
    {
        Intern intern;
        std::string invalidForms[] = {
            "vacation request",
            "resignation letter",
            "tax form",
            "",
            "PRESIDENTIAL PARDON", // Case sensitive
            "presidential_pardon"  // Underscore instead of space
        };

        for (int i = 0; i < 6; i++)
        {
            try
            {
                std::cout << "\nTentando criar: '" << invalidForms[i] << "'" << std::endl;
                AForm *form = intern.makeForm(invalidForms[i], "Target");
                delete form;
            }
            catch (std::exception &e)
            {
                std::cout << "Exceção: " << e.what() << std::endl;
            }
        }
    }

    std::cout << "\n=== FIM DOS TESTES ===" << std::endl;
    return 0;
}