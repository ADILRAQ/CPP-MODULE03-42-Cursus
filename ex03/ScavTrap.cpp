/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 09:17:20 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/19 16:15:34 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap: Default constructor called\n";
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
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

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is in Gate Keeper Mode!\n";
}
