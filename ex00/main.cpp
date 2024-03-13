#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap("John");
	ClapTrap claptrap2("Lennon");

	claptrap.attack("Lennon");
	claptrap2.takeDamage(1);
	claptrap2.attack("John");
	claptrap.takeDamage(1);
	claptrap.beRepaired(1);
	claptrap2.beRepaired(1);

	for (int i = 0; i < 10; ++i)
	{
		claptrap.attack("Lennon");
		claptrap2.takeDamage(1);
	}
}