/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 07:15:31 by jbadaire          #+#    #+#             */
/*   Updated: 2024/04/22 07:15:31 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
	#define CLAPTRAP_HPP

	#include <string>
	class ClapTrap
	{
		protected:
			std::string name;
			unsigned int hitPoints, energyPoints, attackDamage;
		public:
			explicit ClapTrap(const std::string &name = "ClapTrap Default Name");
			ClapTrap (const ClapTrap&);
			ClapTrap& operator=(const ClapTrap&);
			~ClapTrap();
			void attack(std::string const & target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
	};

#endif
