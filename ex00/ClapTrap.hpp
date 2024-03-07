#ifndef CLAPTRAP_HPP
	#define CLAPTRAP_HPP

	#include <string>
	class ClapTrap
	{
		private:
			std::string name;
			unsigned int hitPoints, energyPoints, attackDamage;
		public:
			ClapTrap(std::string name);
			~ClapTrap();
			void attack(std::string const & target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
	};

#endif
