/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 10:20:29 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/19 09:18:28 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP_
#define _CLAPTRAP_HPP_

#include <iostream>

class ClapTrap {
	private:
		std::string		name;
		unsigned int	hitPoint;
		unsigned int	energyPoints;
		unsigned int	attackDamage;

	public:
		ClapTrap(void);
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap &obj);
		~ClapTrap(void);
		ClapTrap		&operator = (const ClapTrap &source);
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			takeOffEnergy(void);
		bool			checkHPEnergy(void) const;
		// Getters
		std::string		getName(void) const;
		unsigned int	getHP(void) const;
		unsigned int	getAttackDamge(void) const;
		unsigned int	getEnergyPoints(void) const;
};

#endif /* _CLAPTRAP_HPP_ */