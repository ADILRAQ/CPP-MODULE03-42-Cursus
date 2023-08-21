/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:45:19 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/21 15:30:12 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_HPP_
#define _FRAGTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string Name);
		~FragTrap(void);
		FragTrap(const FragTrap &obj);
		FragTrap	&operator = (const FragTrap &source);
		void		highFivesGuys(void);
};

#endif /* _FRAGTRAP_HPP_ */