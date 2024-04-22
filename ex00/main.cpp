/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 07:15:31 by jbadaire          #+#    #+#             */
/*   Updated: 2024/04/22 07:15:31 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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