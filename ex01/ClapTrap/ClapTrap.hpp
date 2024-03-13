#ifndef CLAPTRAP_HPP
	#define CLAPTRAP_HPP

	#include <string>
	class ClapTrap
	{
		protected:
			std::string name;
			unsigned int hitPoints, energyPoints, attackDamage;
		public:
			explicit ClapTrap(const std::string name);
			ClapTrap (const ClapTrap&);
			~ClapTrap();
			ClapTrap& operator=(const ClapTrap&);
			void attack(std::string const & target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
	};

#endif
