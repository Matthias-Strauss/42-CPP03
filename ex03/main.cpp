/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:46:47 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/30 16:00:12 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamondtrap("Sparkles");

	std::cout << diamondtrap.getName() << " has: " << diamondtrap.getHitpoints() << " HP, " << diamondtrap.getEnergyPoints() << " EP, " << diamondtrap.getAttackDamage() << " EP." << std::endl;

	diamondtrap.attack("some rando");
	std::cout << diamondtrap.getName() << " has: " << diamondtrap.getHitpoints() << " HP, " << diamondtrap.getEnergyPoints() << " EP, " << diamondtrap.getAttackDamage() << " EP." << std::endl;

	diamondtrap.takeDamage(5);
	std::cout << diamondtrap.getName() << " has: " << diamondtrap.getHitpoints() << " HP, " << diamondtrap.getEnergyPoints() << " EP, " << diamondtrap.getAttackDamage() << " EP." << std::endl;

	diamondtrap.beRepaired(3);
	std::cout << diamondtrap.getName() << " has: " << diamondtrap.getHitpoints() << " HP, " << diamondtrap.getEnergyPoints() << " EP, " << diamondtrap.getAttackDamage() << " EP." << std::endl;

	diamondtrap.whoAmI();
	std::cout << diamondtrap.getName() << " has: " << diamondtrap.getHitpoints() << " HP, " << diamondtrap.getEnergyPoints() << " EP, " << diamondtrap.getAttackDamage() << " EP." << std::endl;

	return 0;
}