/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:46:49 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/24 19:26:14 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	~ClapTrap();

	/* --------------------------------- Actions -------------------------------- */
	void attack(const std::string &target);
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

private:
	std::string _name;
	uint _hitpoints = 10;
	uint _energyPoints = 10;
	uint _attackDamage = 0;
};
