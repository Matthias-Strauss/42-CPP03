/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:46:47 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/24 20:27:53 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap("Clappor the Second");
	ClapTrap claptrap2(claptrap);

	claptrap.attack("the enemy");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);

	claptrap2.attack("another enemy. Dunno where he came from.");
	claptrap2.takeDamage(10);
	claptrap2.beRepaired(3);

	return 0;
}