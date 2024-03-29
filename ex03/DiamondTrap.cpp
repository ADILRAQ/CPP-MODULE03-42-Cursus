/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:06:42 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/21 14:39:55 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap()
{
	std::cout << "DiamondTrap: Default constructor called\n";
}

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_name"), name(Name)
{
	setHP(100);
	setEnergyPoints(50);
	setAttackDamge(30);
	std::cout << "DiamondTrap: Param constructor called\n";
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap: Destructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	*this = obj;
}

DiamondTrap	&DiamondTrap::operator = (const DiamondTrap &source)
{
	if (this != &source)
		ClapTrap::operator=(source);
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Name: " << getName() << ", ClapTrap name: " << ClapTrap::getName() << "\n";
}

// Getter

std::string	DiamondTrap::getName(void) const
{
	return (name);
}
