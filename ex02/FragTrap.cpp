/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:45:13 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/19 15:54:10 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap: Default constructor called\n";
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	std::cout << "FragTrap: Param constructor called\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap: Destructor called\n";
}

FragTrap::FragTrap(const FragTrap &obj)
{
	*this = obj;
}

FragTrap	&FragTrap::operator = (const FragTrap &source)
{
	if (this != &source)
		ClapTrap::operator=(source);
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "HIGH FIVE :)\n";
}
