/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 10:23:19 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/19 15:44:08 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : hitPoint(0), energyPoints(0), attackDamage(0)
{
	/**
	 * ! What about initialzing the name
	*/
	std::cout << "ClapTrap: Default constructor called\n";
}

ClapTrap::ClapTrap(std::string Name) : name(Name), hitPoint(100), energyPoints(50), attackDamage(20)
{
	std::cout << "ClapTrap: Param constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "ClapTrap: Copy constructor called\n";
	*this = obj;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap: Destructor called\n";
}

ClapTrap    &ClapTrap::operator = (const ClapTrap &source)
{
	if (this != &source)
	{
		this->name = source.name;
		this->hitPoint = source.hitPoint;
		this->energyPoints = source.energyPoints;
		this->attackDamage = source.attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (checkHPEnergy())
	{
		std::cout << "ClapTrap " << getName() << " attacks " << target \
			<< ", causing " << getAttackDamge() << " points of damage!\n";
		takeOffEnergy();
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (checkHPEnergy())
	{
		hitPoint += amount;
		takeOffEnergy();
		std::cout << "ClapTrap " << getName() << " repaired " << amount \
				<< " hit points!\n";
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (checkHPEnergy())
	{
		if (amount >= getHP())
			hitPoint = 0;
		else
			hitPoint -= amount;
		std::cout << "ClapTrap " << getName() << " got attacked, lost " << amount \
				<< " points!\n";
	}
}

// Getters

std::string	ClapTrap::getName(void) const
{
	return (name);
}

unsigned int	ClapTrap::getHP(void) const
{
	return (hitPoint);
}

unsigned int	ClapTrap::getAttackDamge(void) const
{
	return (attackDamage);
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (energyPoints);
}

// Tools

void	ClapTrap::takeOffEnergy(void)
{
	if (energyPoints > 0)
		energyPoints--;
}

bool	ClapTrap::checkHPEnergy(void) const
{
	if (getHP() > 0 && getEnergyPoints() > 0)
		return (true);
	return (false);
}
