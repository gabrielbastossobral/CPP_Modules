#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main(void)
{
		std::cout << RED;
    	ClapTrap	cT1("Tim Maia");
		std::cout << "ClapTrap " << cT1.getName() << " has " << cT1.getHitPoints();
		std::cout << " hit points and "<< cT1.getEnergyPoints() << " energy points.";
		std::cout << std::endl;
		cT1.attack("the enemy");
		cT1.beRepaired(100);
		cT1.takeDamage(50);
		std::cout << "Claptrap " << cT1.getName() << " has " << cT1.getHitPoints();
		std::cout << " hit points and "<< cT1.getEnergyPoints() << " energy points.";
		std::cout << RESET << std::endl << std::endl;

		std::cout << BLUE;
		ScavTrap	cT2("Cartola");
		std::cout << "ScavTrap " << cT2.getName() << " has " << cT2.getHitPoints();
		std::cout << " hit points and "<< cT2.getEnergyPoints() << " energy points.";
		std::cout << std::endl;
		cT2.attack("the enemy");
		cT2.guardGate();
		cT2.beRepaired(40);
		cT2.takeDamage(100);
		std::cout << "ScavTrap " << cT2.getName() << " has " << cT2.getHitPoints();
		std::cout << " hit points and "<< cT2.getEnergyPoints() << " energy points.";
		std::cout << RESET << std::endl << std::endl;

		std::cout << YELLOW;
        FragTrap    cT3("Nelson Gonçalves");
		std::cout << "FragTrap " << cT3.getName() << " has " << cT3.getHitPoints();
		std::cout << " hit points and "<< cT3.getEnergyPoints() << " energy points.";
		std::cout << std::endl;
		cT3.attack("the enemy");
		cT3.highFivesGuys();
		cT3.beRepaired(40);
		cT3.takeDamage(100);
		std::cout << "FragTrap " << cT3.getName() << " has " << cT3.getHitPoints();
		std::cout << " hit points and "<< cT3.getEnergyPoints() << " energy points.";
		std::cout << RESET << std::endl << std::endl;
		return (0);
}