/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:56:14 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/30 15:42:34 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("boring_default_name"), FragTrap(), ScavTrap(), _name("Sparkles")
{
	_hitpoints = FragTrap::_hitpoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "Default constructor called: " << "DiamondTrap " << this->_name << " is born!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), _name(name)
{
	// _name = ClapTrap::getName();
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
	// _hitpoints = src._hitpoints;
	// _energyPoints = src._energyPoints;
	// _attackDamage = src._attackDamage;
	std::cout << "Copy constructor called: " << "DiamondTrap " << this->_name << " is cloned!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	if (this != &src)
	{
		ClapTrap::operator=(src);
		FragTrap::operator=(src);
		ScavTrap::operator=(src);
		_name = src._name;
	}
	std::cout << "Assignment operator called: DiamondTrap " << _name << " is assigned!" << std::endl;
	return *this;
}

/* ------------------------------- Destructor ------------------------------- */
DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor called: DiamondTrap " << this->_name << " died!" << std::endl;
}

/* --------------------------------- Actions -------------------------------- */
void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap " << this->_name << " is also known as ClapTrap " << ClapTrap::getName() << "." << std::endl;
}
