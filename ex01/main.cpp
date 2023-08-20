/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:35:25 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/19 16:12:10 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	obj("GODZILLA");

	obj.attack("KING KONG");
	obj.takeDamage(49);
	obj.beRepaired(9);
	obj.guardGate();
	return (0);
}
