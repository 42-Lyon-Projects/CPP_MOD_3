#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->guardMode = false;
	std::cout << "ScavTrap " << this->name << " has been created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other), guardMode(other.guardMode)
{
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " has been destroyed" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	this->guardMode = other.guardMode;
	return *this;
}

void ScavTrap::attack(std::string const &target)
{
	if (this->energyPoints == 0)
	{
		std::cout << "ScavTrap " << this->name << " is out of energy" << std::endl;
		return;
	}
	if (this->hitPoints == 0)
	{
		std::cout << "ScavTrap " << this->name << " is dead" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage <<
	" points of damage!" << std::endl;
	this->energyPoints--;
}

void ScavTrap::guardGate()
{
	if (this->guardMode)
	{
		std::cout << "ScavTrap " << this->name << " has exited gate keeper mode" << std::endl;
		this->guardMode = false;
		return;
	}
	std::cout << "ScavTrap " << this->name << " has entered in gate keeper mode" << std::endl;
	this->guardMode = true;
}
