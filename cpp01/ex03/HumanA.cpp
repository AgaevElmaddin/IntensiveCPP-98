#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon) {}

HumanA::~HumanA() {}

Weapon& HumanA::getWeapon() const
{
	return (this->weapon);
}

void	HumanA::attack() const
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
