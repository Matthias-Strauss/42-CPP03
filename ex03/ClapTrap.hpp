/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:46:49 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/30 15:50:06 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap
{
public:
	/* ------------------------------ Constructors ------------------------------ */
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);

	/* ------------------------------- Destructor ------------------------------- */
	virtual ~ClapTrap();

	/* --------------------------------- Actions -------------------------------- */
	virtual void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	bool isAlive() const;
	bool hasEnoughEnergy(uint requiredEnergy) const;

	/* --------------------------------- Getters -------------------------------- */
	std::string getName() const;
	int getHitpoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;

	/* --------------------------------- Setters -------------------------------- */
	void setName(std::string name);
	void setHitpoints(int hitpoints);
	void setEnergyPoints(int energyPoints);
	void setAttackDamage(int attackDamage);

protected:
	std::string _name;
	uint _hitpoints = 10;
	uint _energyPoints = 10;
	uint _attackDamage = 0;
};
#endif