/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 07:38:30 by jbadaire          #+#    #+#             */
/*   Updated: 2024/04/22 07:38:30 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
	#define SCAVTRAP_HPP
	#include "../ClapTrap/ClapTrap.hpp"

	class ScavTrap : public ClapTrap
	{
		private:
			bool guardMode;
		public:
			explicit ScavTrap(const std::string &name = "ScavTrap Default Name");
			ScavTrap (const ScavTrap &other);
			ScavTrap& operator=(const ScavTrap& other);
			~ScavTrap();
			void attack(std::string const &target);
			void guardGate();
	};

#endif
