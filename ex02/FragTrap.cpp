/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:56:14 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/30 14:30:52 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Fraggy")
{
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Default constructor called: " << "FragTrap " << this->_name << " is born!" << std::endl;
	;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Parameterized constructor called: " << "FragTrap " << this->_name << " is born!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	_hitpoints = src._hitpoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
	std::cout << "Copy constructor called: " << "FragTrap " << this->_name << " is cloned!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	if (this != &src)
	{
		FragTrap::operator=(src);
	}
	std::cout << "Assignment operator called: FragTrap " << _name << " is assigned!" << std::endl;
	return *this;
}

/* ------------------------------- Destructor ------------------------------- */
FragTrap::~FragTrap()
{
	std::cout << "Destructor called: FragTrap " << _name << " died!" << std::endl;
}

/* --------------------------------- Actions -------------------------------- */
void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " raises his hand and smiles at you." << std::endl;
	char answer;
	std::cout << "Give " << _name << " a high five? [y/n] :";
	std::cin >> answer;
	if (answer == 'y' || answer == 'Y')
	{
		std::cout << "You go in for the high five. " << _name << " jumps up, and your hands meet with a thundering clap! All other xTraps look on in awe at the magnificence of your bromance." << std::endl;
	}
	else if (answer == 'n' || answer == 'N')
	{
		std::cout << _name << "lets his hand drop in defeat, and slowly waddles away. What a way to kill the vibe!" << std::endl;
	}
	else
	{
		std::cout << "You give off something unintelligible. The xTraps are weirded out by your behavior and start whispering amongst themselves." << std::endl;
	}
}
