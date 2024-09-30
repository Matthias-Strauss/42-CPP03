/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:46:47 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/30 12:07:56 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap("Clappor the Second");
	ClapTrap claptrap2(claptrap);

	std::cout << claptrap.getName() << " has: " << claptrap.getHitpoints() << " HP, " << claptrap.getEnergyPoints() << " EP" << std::endl;

	claptrap.attack("the enemy");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	std::cout << claptrap.getName() << " has: " << claptrap.getHitpoints() << " HP, " << claptrap.getEnergyPoints() << " EP" << std::endl;

	std::cout << std::endl;
	std::cout << claptrap2.getName() << " has: " << claptrap2.getHitpoints() << " HP, " << claptrap2.getEnergyPoints() << " EP" << std::endl;
	claptrap2.attack("another enemy, dunno where he came from");
	claptrap2.takeDamage(10);
	claptrap2.beRepaired(3);
	std::cout << claptrap2.getName() << " has: " << claptrap2.getHitpoints() << " HP, " << claptrap2.getEnergyPoints() << " EP" << std::endl;

	std::cout << std::endl;

	std::cout << "additional out-of-energy test:" << std::endl;
	ClapTrap clappy("Clappy");
	std::cout << clappy.getName() << " has: " << clappy.getHitpoints() << " HP, " << clappy.getEnergyPoints() << " EP" << std::endl;
	clappy.beRepaired(3);
	clappy.beRepaired(3);
	std::cout << clappy.getName() << " has: " << clappy.getHitpoints() << " HP, " << clappy.getEnergyPoints() << " EP" << std::endl;
	clappy.beRepaired(3);
	clappy.beRepaired(3);
	clappy.beRepaired(3);
	clappy.beRepaired(3);
	clappy.beRepaired(3);
	clappy.beRepaired(3);
	clappy.beRepaired(3);
	std::cout << clappy.getName() << " has: " << clappy.getHitpoints() << " HP, " << clappy.getEnergyPoints() << " EP" << std::endl;
	clappy.beRepaired(3);
	clappy.attack("a pillow");
	return 0;
}