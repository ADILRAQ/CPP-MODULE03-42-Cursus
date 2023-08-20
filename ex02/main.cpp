/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:35:25 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/19 16:15:17 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	obj("GODZILLA");

	obj.attack("KING KONG");
	obj.takeDamage(49);
	obj.beRepaired(9);
	obj.highFivesGuys();
	return (0);
}