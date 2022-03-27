/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:10:27 by msousa            #+#    #+#             */
/*   Updated: 2022/03/27 21:51:03 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

HumanA::HumanA( std::string name, Weapon& weapon )
	: _name(name), _weapon(weapon)
{
	/* No-op */
}

HumanA::~HumanA( void ) { /* No-op */ }

void	HumanA::attack( void ) const
{
	std::cout << _name << " attacks with their ";
	std::cout << _weapon.getType() << std::endl;
}
