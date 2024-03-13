#include "ClapTrap/ClapTrap.hpp"
#include "ScavTrap/ScavTrap.hpp"
#include "FragTrap/FragTrap.hpp"

int main()
{
	ClapTrap ClapTrap("John");
	ScavTrap scavTrap("Lennon");

	ClapTrap.attack("Lennon");
	scavTrap.takeDamage(1);
	scavTrap.attack("John");
	ClapTrap.takeDamage(1);
	ClapTrap.beRepaired(1);
	scavTrap.beRepaired(1);

	for (int i = 0; i < 10; ++i)
	{
		ClapTrap.attack("Lennon");
		scavTrap.takeDamage(1);
	}
}
