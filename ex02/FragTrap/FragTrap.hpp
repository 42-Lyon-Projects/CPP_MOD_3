#ifndef FRAGTRAP_HPP
	#define FRAGTRAP_HPP
	#include "../ClapTrap/ClapTrap.hpp"

	class FragTrap : public ClapTrap
	{
		public:
			explicit FragTrap(std::string name);
			FragTrap (const FragTrap& other);
			~FragTrap();
			FragTrap& operator=(const FragTrap& other);
			void highFivesGuys(void);
	};

#endif
