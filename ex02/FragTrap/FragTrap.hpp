/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 07:38:30 by jbadaire          #+#    #+#             */
/*   Updated: 2024/04/22 07:38:30 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
	#define FRAGTRAP_HPP
	#include "../ClapTrap/ClapTrap.hpp"

	class FragTrap : public ClapTrap
	{
		public:
			explicit FragTrap(const std::string &name = "FragTrap Default Name");
			FragTrap (const FragTrap& other);
			~FragTrap();
			FragTrap& operator=(const FragTrap& other);
			void highFivesGuys(void);
	};

#endif
