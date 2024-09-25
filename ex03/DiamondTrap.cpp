/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:56:14 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/25 16:52:34 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("boring_default_name"), FragTrap(), ScavTrap(), _name("Sparkles")
{
	_hitpoints = FragTrap::_hitpoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "Default constructor called: " << "DiamondTrap " << this->_name << " is born!" << std::endl;
	;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), _name(name)
{
	_name = ClapTrap::getName();
	_hitpoints = FragTrap::_hitpoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "Parameterized constructor called: " << "DiamondTrap " << this->_name << " is born!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), FragTrap(src), ScavTrap(src), _name(src._name)
{
	_hitpoints = FragTrap::_hitpoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "Copy constructor called: " << "DiamondTrap " << this->_name << " is cloned!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	if (this != &src)
	{
		DiamondTrap::operator=(src);
	}
	std::cout << "Assignment operator called: DiamondTrap " << _name << " is assigned!" << std::endl;
	return *this;
}

/* ------------------------------- Destructor ------------------------------- */
DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor called: DiamondTrap " << _name << " died!" << std::endl;
}

/* --------------------------------- Actions -------------------------------- */
void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap " << _name << " is also known as ClapTrap " << ClapTrap::getName() << "." << std::endl;
}

// void DiamondTrap::highFivesGuys(void)
// {
// 	std::cout << "DiamondTrap " << _name << " raises his hand and smiles at you." << std::endl;
// 	char answer;
// 	std::cout << "Give " << _name << " a high five? [y/n] :";
// 	std::cin >> answer;
// 	if (answer == 'y' || answer == 'Y')
// 	{
// 		std::cout << "You go in for the high five. " << _name << " jumps up, and your hands meet with a thundering clap! All other xTraps look on in awe at the magnificence of your bromance." << std::endl;
// 	}
// 	else if (answer == 'n' || answer == 'N')
// 	{
// 		std::cout << _name << "lets his hand drop in defeat, and slowly waddles away. What a way to kill the vibe!" << std::endl;
// 	}
// 	else
// 	{
// 		std::cout << "You give off something unintelligible. The xTraps are weirded out by your behavior and start whispering amongst themselves." << std::endl;
// 	}
// }
