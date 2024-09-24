/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:46:48 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/24 19:05:04 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */
ClapTrap::ClapTrap() : _name("Clappy"), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called: " << "ClapTrap " << this->_name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Parameterized constructor called: " << "ClapTrap " << this->_name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) : _name(src._name), _hitpoints(src._hitpoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{
	std::cout << "Copy constructor called: " << "ClapTrap " << this->_name << " is born!" << std::endl;
}

/* ------------------------ Copy assignment operator ------------------------ */
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitpoints = other._hitpoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

/* ------------------------------ Deconstructor ----------------------------- */
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called: " << "ClapTrap " << this->_name << " died!" << std::endl;
}

/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                                   Actions                                  */
/* -------------------------------------------------------------------------- */

void ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	target.takeDamage(this->_attackDamage);
}

void ClapTrap::takeDamage(unsigned int amount)
{
}

void ClapTrap::beRepaired(unsigned int amount)
{
}
