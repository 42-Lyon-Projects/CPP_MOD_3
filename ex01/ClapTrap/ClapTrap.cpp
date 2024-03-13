#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string name) : name(name)
{
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap " << this->name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other) : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " has been destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return *this;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " has been repaired by " << amount << " points!" << std::endl;
	if (this->hitPoints + amount > 10)
		this->hitPoints = 10;
	else
		this->hitPoints += amount;
	this->energyPoints--;
}


void ClapTrap::attack(std::string const & target)
{
	if (this->energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " is out of energy" << std::endl;
		return;
	}
	if (this->hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	if (amount > this->hitPoints)
	{
		this->hitPoints = 0;
		return ;
	}
	this->hitPoints -= amount;
}
