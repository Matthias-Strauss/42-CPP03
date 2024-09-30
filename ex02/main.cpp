/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:46:47 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/30 14:27:14 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap fragtrap("Clappor the Second");

	std::cout << fragtrap.getName() << " has: " << fragtrap.getHitpoints() << " HP, " << fragtrap.getEnergyPoints() << " EP" << std::endl;
	fragtrap.attack("the enemy");
	std::cout << fragtrap.getName() << " has: " << fragtrap.getHitpoints() << " HP, " << fragtrap.getEnergyPoints() << " EP" << std::endl;
	fragtrap.takeDamage(5);
	std::cout << fragtrap.getName() << " has: " << fragtrap.getHitpoints() << " HP, " << fragtrap.getEnergyPoints() << " EP" << std::endl;
	fragtrap.beRepaired(3);
	std::cout << fragtrap.getName() << " has: " << fragtrap.getHitpoints() << " HP, " << fragtrap.getEnergyPoints() << " EP" << std::endl;

	std::cout << std::endl;
	fragtrap.highFivesGuys();

	std::cout << std::endl;

	std::cout << "### ADDITIONAL DEEP COPY TESTS ###" << std::endl;
	FragTrap fragtrap2(fragtrap);
	fragtrap2.setName("Clappor the Third");
	fragtrap2.attack("my emotions");
	std::cout << fragtrap2.getName() << " has: " << fragtrap2.getHitpoints() << " HP, " << fragtrap2.getEnergyPoints() << " EP" << std::endl;
	std::cout << fragtrap.getName() << " has: " << fragtrap.getHitpoints() << " HP, " << fragtrap.getEnergyPoints() << " EP" << std::endl;

	return 0;
}