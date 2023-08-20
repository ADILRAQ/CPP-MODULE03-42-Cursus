/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:35:25 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/19 09:11:42 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	obj("King Kong");

	obj.attack("Godzilla");
	obj.takeDamage(9);
	obj.beRepaired(12);

	return (0);
}
