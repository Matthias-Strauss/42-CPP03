/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:46:48 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/30 02:13:43 by mstrauss         ###   ########.fr       */
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
	std::cout << "Copy constructor called: " << "ClapTrap " << this->_name << " is cloned!" << std::endl;
}

/* ------------------------ Copy assignment operator ------------------------ */
ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitpoints = src._hitpoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return *this;
}

/* ------------------------------ Deconstructor ----------------------------- */
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called: " << "ClapTrap " << this->_name << " died!" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                   Actions                                  */
/* -------------------------------------------------------------------------- */

void ClapTrap::attack(const std::string &target)
{
	if (!this->isAlive())
	{
		std::cout << "ClapTrap " << this->_name << " is out of health!" << std::endl;
		return;
	}
	if (!this->hasEnoughEnergy(1))
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	_energyPoints -= 1;
	// target.takeDamage(this->_attackDamage);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->isAlive())
	{
		std::cout << "ClapTrap " << this->_name << " is out of health!" << std::endl;
		return;
	}
	if (!this->hasEnoughEnergy(1))
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
		return;
	}
	this->setHitpoints(this->getHitpoints() - amount);
	std::cout << "ClapTrap " << this->_name << " has taken " << amount << " points of damage! OUCHIE!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) // ADD CHECK TO NOT EXCEED MAX HITPOINTS
{
	if (!this->isAlive())
	{
		std::cout << "ClapTrap " << this->_name << " is out of health!" << std::endl;
		return;
	}
	if (!this->hasEnoughEnergy(1))
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
		return;
	}
	// no check for max health, who says a claptrap can't improve on its design?
	this->setHitpoints(this->getHitpoints() + amount);
	_energyPoints -= 1;

	std::cout << "ClapTrap " << this->_name << " has been repaired for " << amount << " hitpoints! YAY!" << std::endl;
}

/* ---------------------------------- Utils --------------------------------- */
bool ClapTrap::isAlive() const
{
	return (this->_hitpoints > 0 ? true : false);
}

bool ClapTrap::hasEnoughEnergy(uint requiredEnergy) const
{
	return (this->_energyPoints > requiredEnergy ? true : false);
}

/* --------------------------------- Getters -------------------------------- */
std::string ClapTrap::getName() const
{
	return this->_name;
}

int ClapTrap::getHitpoints() const
{
	return this->_hitpoints;
}

int ClapTrap::getEnergyPoints() const
{
	return this->_energyPoints;
}

int ClapTrap::getAttackDamage() const
{
	return this->_attackDamage;
}

/* --------------------------------- Setters -------------------------------- */
void ClapTrap::setName(std::string name)
{
	_name = name;
}

void ClapTrap::setHitpoints(int hitpoints)
{
	_hitpoints = hitpoints;
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
	_energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(int attackDamage)
{
	_attackDamage = attackDamage;
}
