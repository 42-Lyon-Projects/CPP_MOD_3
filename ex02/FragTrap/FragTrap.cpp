#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 20;
	std::cout << "FragTrap " << this->name << " has been created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " has been destroyed" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "BLOUP" << std::endl;
}