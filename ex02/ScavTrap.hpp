/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 09:17:24 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/21 09:54:13 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP
#define _SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string Name);
		ScavTrap(const ScavTrap &obj);
		~ScavTrap(void);
		ScavTrap	&operator = (const ScavTrap &source);
		void		attack(const std::string& target);
		void		guardGate(void);
};

#endif /* _SCAVTRAP_HPP */