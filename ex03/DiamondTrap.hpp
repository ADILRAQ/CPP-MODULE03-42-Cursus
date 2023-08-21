/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:32:13 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/21 14:39:51 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIAMONADTRAP_HPP_
#define _DIAMONADTRAP_HPP_

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string	name;
	public:
		DiamondTrap(void);
		DiamondTrap(std::string Name);
		~DiamondTrap(void);
		DiamondTrap(const DiamondTrap &obj);
		DiamondTrap	&operator = (const DiamondTrap &source);
		void		whoAmI(void);
		// Getter
		std::string	getName(void) const;
};

#endif /* _DIAMONADTRAP_HPP_ */