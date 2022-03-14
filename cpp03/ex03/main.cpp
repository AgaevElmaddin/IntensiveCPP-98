#include "DiamondTrap.hpp"

int		main(void)
{
	{
		//DiamondTrap defaultCharacter3;
		DiamondTrap character3("lion");
		//DiamondTrap copyCharacter3(character3);

		character3.attack("hyena");
		character3.beRepaired(1);
		character3.takeDamage(0);
		character3.beRepaired(0);
		character3.takeDamage(5);
		character3.beRepaired(11);
		character3.takeDamage(15);
		character3.beRepaired(1);
		character3.guardGate();
		character3.highFivesGuys();
		character3.whoAmI();
	}
	std::cout << std::endl << std::endl;


	{
		//FragTrap defaultCharacter2;
		FragTrap character2("Dog");
		//FragTrap copyCharacter2(character2);

		character2.attack("Cat");
		character2.beRepaired(1);
		character2.takeDamage(0);
		character2.beRepaired(0);
		character2.takeDamage(5);
		character2.beRepaired(11);
		character2.takeDamage(15);
		character2.beRepaired(1);
		character2.highFivesGuys();
	}
	std::cout << std::endl << std::endl;

	{

		//ScavTrap defaultCharacter1;
		ScavTrap character1("Pushkin");
		//ScavTrap copyCharacter1(character1);

		character1.attack("Dantes");
		character1.beRepaired(1);
		character1.takeDamage(0);
		character1.beRepaired(0);
		character1.takeDamage(5);
		character1.beRepaired(11);
		character1.takeDamage(15);
		character1.beRepaired(1);
		character1.guardGate();
	}

	std::cout << std::endl << std::endl;
	{
		//ClapTrap defaultCharacter;
		ClapTrap character("Danko");
		//ClapTrap copyCharacter(character);

		character.attack("his enemy");
		character.beRepaired(1);
		character.takeDamage(0);
		character.beRepaired(0);
		character.takeDamage(5);
		character.beRepaired(11);
		character.takeDamage(15);
		character.beRepaired(1);
	}
	return (0);
}