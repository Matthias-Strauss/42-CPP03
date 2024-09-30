/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:46:47 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/30 13:19:13 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scavtrap("Clappor the Second");

	std::cout << scavtrap.getName() << " has: " << scavtrap.getHitpoints() << " HP, " << scavtrap.getEnergyPoints() << " EP" << std::endl;
	scavtrap.attack("the enemy");
	std::cout << scavtrap.getName() << " has: " << scavtrap.getHitpoints() << " HP, " << scavtrap.getEnergyPoints() << " EP" << std::endl;
	scavtrap.takeDamage(5);
	std::cout << scavtrap.getName() << " has: " << scavtrap.getHitpoints() << " HP, " << scavtrap.getEnergyPoints() << " EP" << std::endl;
	scavtrap.beRepaired(3);
	std::cout << scavtrap.getName() << " has: " << scavtrap.getHitpoints() << " HP, " << scavtrap.getEnergyPoints() << " EP" << std::endl;
	scavtrap.guardGate();

	std::cout << std::endl;

	std::cout << "### ADDITIONAL DEEP COPY TESTS ###" << std::endl;
	ScavTrap scavtrap2(scavtrap);
	scavtrap2.setName("Clappor the Third");
	scavtrap2.attack("my emotions");
	std::cout << scavtrap2.getName() << " has: " << scavtrap2.getHitpoints() << " HP, " << scavtrap2.getEnergyPoints() << " EP" << std::endl;
	std::cout << scavtrap.getName() << " has: " << scavtrap.getHitpoints() << " HP, " << scavtrap.getEnergyPoints() << " EP" << std::endl;

	return 0;
}