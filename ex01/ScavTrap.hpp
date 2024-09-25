/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 20:37:05 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/24 21:06:18 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
public:
	/* ------------------------------ Constructors ------------------------------ */
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);

	/* ------------------------------- Destructor ------------------------------- */
	~ScavTrap() override;

	/* --------------------------------- Actions -------------------------------- */
	void attack(const std::string &target) override;
	void guardGate();
};
