/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 09:17:20 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/22 09:58:09 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap: Default constructor called\n";
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	setHP(100);
	setEnergyPoints(50);
	setAttackDamge(20);
	std::cout << "ScavTrap: Param constructor called\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: Destructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	*this = obj;
}

ScavTrap	&ScavTrap::operator = (const ScavTrap &source)
{
	if (this != &source)
		ClapTrap::operator=(source);
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (checkHPEnergy())
	{
		std::cout << "ScavTrap " << getName() << " attacks " << target \
			<< ", causing " << getAttackDamge() << " points of damage!\n";
		takeOffEnergy();
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is in Gate Keeper Mode!\n";
}
