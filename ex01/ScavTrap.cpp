/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 20:37:13 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/30 13:19:59 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */
ScavTrap::ScavTrap() : ClapTrap("Scavvy")
{
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Default constructor called: " << "ScavTrap " << this->_name << " is born!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Parameterized constructor called: " << "ScavTrap " << this->_name << " is born!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	// _hitpoints = 100; // DO THESE NEED TO BE OVERRIDDEN OR NOT?
	// _energyPoints = 50;
	// _attackDamage = 20;
	std::cout << "Copy constructor called: " << "ScavTrap " << this->_name << " is cloned!" << std::endl;
}

/* --------------------------- Assignment operator -------------------------- */
ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	if (this != &src)
	{
		ClapTrap::operator=(src);
	}
	std::cout << "Assignment operator called: ScavTrap " << _name << " is assigned!" << std::endl;
	return *this;
}

/* ------------------------------- Destructor ------------------------------- */
ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called: ScavTrap " << _name << " died!" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                   Actions                                  */
/* -------------------------------------------------------------------------- */

void ScavTrap::attack(const std::string &target)
{
	if (!this->isAlive() || !this->hasEnoughEnergy(1))
	{
		std::cout << "ScavTrap " << this->_name << " is dead!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of DAMAGE!" << std::endl;
	_energyPoints -= 1;
	// target.takeDamage(this->_attackDamage);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in GATE KEEPER MODE!!" << std::endl;
}
